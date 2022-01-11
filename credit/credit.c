#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
       int length;
       //Prompt for user imput
       do
       {
       long card_number = get_long("Input Card Number: ");
       printf("This is your card number: %lu\n", card_number);
       length = floor(log10(labs(card_number))) + 1;
       printf("Length is: %d\n", length);
       }
       while (length != 13 && length != 15 && length != 16);
       //Calculate checksum
       
       //Check for card length and starting digits
       
       //Print AMEX, MASTERCARD, VISA, or INVALID
        
}
