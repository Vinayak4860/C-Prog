#include<stdio.h>
 
// BODMAS rule is used in C language 
/*
BO - Bracket open 
D - Divide 
M - Multiplication 
A - Addition 
S - Subtraction

Prioritise (/ * %) precedence on 1st
then (+-) precedence on 2nd 
then (=) precedence at last
but if the equation has only 1st precedence for example 'y equation' below then we do it left to right
*/

int main() {
    int x = 4 + 9 * 10;
    int y = 4 * 3/6 * 2; // LEFT TO RIGHT cuz of same precedence level, first 4*3 then 12/6 then 2*2 is = 4 (Associativity rule)
    printf("Answer is : %d\n", x);
    printf("Answer is : %d\n", y);

    // Practice ques.
    int a = 5*2 - 2*3; 
    int b = 5*2 / 2*3; 
    int c = 5*(2/2)*3; 
    int d = 5+2 / 2*3; // firstly 2/2 then 1*3 then 5+3 is = 8
    printf("Answer is : %d\n", a);
    printf("Answer is : %d\n", b);
    printf("Answer is : %d\n", c);
    printf("Answer is : %d", d);
    return 0;    

}