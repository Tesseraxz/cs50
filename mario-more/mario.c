#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    do
    {
        //Ask for height
        height = get_int("Height(1-8): ");
    }
    //Reject abstract values
    while (height < 1 || height > 8);
    
    for (int row = 1; row <= height; row++)
    {
        //Print Spaces, Rows and Height
        int spaces = height - row;
        printf("%.*s", spaces, "        ");
        printf("%.*s", row, "########");
        printf("  ");
        printf("%.*s", row, "########");
        printf("\n");
    }
}
