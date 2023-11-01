#include <stdio.h>

int main() {
    int a = 5;
    int b = a;
    int c = b + 5;
    int d = 1,e;

    // WRONG
    int OldAge = 16;
    int NewAge = 16 + years; // it is giving error because variable is used before declaring it which is not possible in C
    int years = 2;

    // RIGHT
    int OldAge = 16;
    int years = 2; // declared it before using it below
    int NewAge = 16 + years;

    // Declaration
    int a,b,c;
    a = b = c = 5;
    return 0;
}