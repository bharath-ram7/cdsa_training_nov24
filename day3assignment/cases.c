#include<stdio.h>
#include<ctype.h>

int main() {
    char inputCharacter = '\0';
    printf("Enter a single character (either to change it to UpperCase if it is lower or vice versa):\n");
    scanf("%c", &inputCharacter);

    if (inputCharacter >= 'a' && inputCharacter <= 'z') {
        inputCharacter = toupper(inputCharacter);
        printf("The changed character is %c\n", inputCharacter);
    } 
    else if (inputCharacter >= 'A' && inputCharacter <= 'Z') {
        inputCharacter = tolower(inputCharacter);
        printf("The changed character is %c\n", inputCharacter);
    } 
    else {
        printf("Invalid input\n");
    }

    return 0;
}