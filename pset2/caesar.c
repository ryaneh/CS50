#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{

//Counting Command-Line Arguments
//argc is the count. argv is the value of each part of the argument
//argc includes the running of the command. 
//verify argc is 2. 

    if(argc == 2)
    {
        
        
        
        for(int letter=0, len = strlen(argv[1]); letter < len; letter++)
        {
            if(isdigit(argv[1][letter]))
            {
                continue;
            }
        
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        int key = atoi(argv[1]);
        printf("(remove)Key: %i\n", key);
        
        string plaintext = get_string("Plaintext: ");
        
        for(int letter=0, len = strlen(plaintext); letter < len; letter++)
        {
            if(isalpha(plaintext[letter]))
            {
                printf("%c", plaintext[letter] + key);
            }
            else
            {
                printf("%c", plaintext[letter]);
            }
        }
        //save each letter to ciphertext
        //print ciphertex

    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
}
