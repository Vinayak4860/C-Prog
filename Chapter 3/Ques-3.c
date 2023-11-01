// Program to find a character is uppercase or not
#include <stdio.h>

int main() {
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') { // Ch = 97 & ch = 'a' both are same cuz every ch has its ascii value and 'a' is 97
        printf("Character is uppercase");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Character is Lowercase");
    }
    else {
        printf("Not a letter");
    }
    return 0;
}