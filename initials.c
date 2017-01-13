#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// Converts a full name to just uppercase initials
// ex: John Doe ---> JD


int main(void){
    string initials = get_string();
    // print the first uppercase initial if only one word
    printf("%c", toupper(initials[0]));
    // loop to print out the first letter after a space
    for (int i = 0; i < strlen(initials); i++){
        if (initials[i] == ' ' && initials[i+1] != '\0'){
    printf("%c", toupper(initials[i+1]));
    }
}
    printf("\n");
}
