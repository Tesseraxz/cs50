#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Get command line argument
int main(int argc, string argv[])
{
    int key;
    
    
    //Check to see if 2nd parameter is a number
    if (argc == 2 && isdigit(*argv[1]))
    {
        
        // checking if the given key consists of only numbers
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!(isdigit(argv[1][i])))
            {
            printf("Usage: ./caesar key\n");
            return 1;
            }
        }
        
        //Convert input string to an int
        key = atoi(argv[1]);
        //Grab input word
        string s = get_string("plaintext:  ");
        //Start cypertext line
        printf("ciphertext: ");
        
        //Iterate input word when lowercase or uppercase x number of times
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            
            //Check for lowercase
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                //Print new character by x number of times
                printf("%c", ((s[i] - 'a') + key) %26 + 'a');
            }
            
            //Check for uppercase
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                //Print new character by x number of times
                printf("%c", ((s[i] - 'A') + key) %26 + 'A');
            }
            
            //Print special characters
            else
            {
                printf("%c", s[i]);
            }
        }
        
        //Break to new line
        printf("\n");
        return 0;
    }
    
    //Return correct command usage if invalid
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
