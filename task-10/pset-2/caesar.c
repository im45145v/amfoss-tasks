#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Caesar: c(ith) = (p(ith) + k) % 26

// argc is an int that represents the number of arguments passed
// argv is an array of string that represents the list of arguments passed
int main(int argc, string argv[])
{    
    
    if (argv[1]) 
    {
        // The atoi function converts a string to an integer
        int k = atoi(argv[1]);
        
        // Check if there was a second argument passed with the program call
        // And that that second argument is higher than 0 (has to be to cypher with caesar)
        if (argc == 2 && k > 0)
        {
            // Prompt user for text to cypher
            string text = get_string("plaintext: ");
            // Get length of the string
            int length = strlen(text);
            // Create an array of the same length for the ciphered characters
            char res[length];
            // Print "ciphertext: " now
            printf("ciphertext: ");
            for (int i = 0; i < length; i++) 
            {
                // Case: Char is Uppercase
                // Ascii value of A = 65
                if (isupper(text[i])) 
                {
                    res[i] = ((text[i] + k) - 65) % 26 + 65;
                }
                // Case: Char is Lowercase
                // Ascii value of a = 97
                else if (islower(text[i]))
                {
                    res[i] = ((text[i] + k) - 97) % 26 + 97;
                }
                // Case: not a letter of the alphabet 
                else 
                {
                    res[i] = text[i];
                }
                // Print all the ciphered characters 
                printf("%c", res[i]); 
            }
            printf("\n");
            return 0;
        } 
        else 
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    } 
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
}