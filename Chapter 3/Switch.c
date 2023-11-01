#include <stdio.h>

int main() {
    char day; // m-mon, t-tues, w-wed, T-thu, f-fri, s-sat, S-sun
    printf("Enter day : ");
    scanf("%c", &day);

    switch (day) {
        case 'm' : printf("monday");
                 break;
        case 't' : printf("tuesday");
                 break;
        case 'w' : printf("wednesday");
                break;
        case 'T' : printf("thursday");
                break;
        case 'f' : printf("friday");
                break;
        case 's' : printf("saturday");
                break;
        case 'S' : printf("sunday"); 
                break;
        default : printf("Not a valid day!");
                 
    }
    return 0;
}
// it can be nested switch which means switch under switch