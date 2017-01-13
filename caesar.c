#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// this script converts a string of text to a cryptic code, as specified by the user's input of how many spaces to shift their letters
// ex: if user enters 4, it will shift "ABc D!" to "EFg H!"

int main(int argc, string argv[]){
    //check to see if user entered a key or not
    if (argc != 2){
        printf("Please enter a key to convert text.");
        return 1;
        }
    else{
        //converts the input from a string to an integer
        int k = atoi(argv[1]);
        printf("plaintext: ");
        //gets text string from user
        string p = get_string();
        printf("ciphertext: ");
        for (int i = 0, n = strlen(p); i < n; i++){
            int c = 0;
            //changes uppercase text to alphanumeric 0 and back to ASCII
            if (isupper(p[i])){
                c = (((int)p[i] - 65 + k) % 26) + 65;
                printf("%c", (char)c);
            }
            //changes lowercase text to alphanumeric 0 and back to ASCII
            else if (islower(p[i])){
                c = (((int)p[i] - 97 + k) % 26) + 97;
                printf("%c", (char)c);
            }
           else{
                printf("%c", p[i]);
            }
        }
 printf("\n");
 return 0;
        }
}
