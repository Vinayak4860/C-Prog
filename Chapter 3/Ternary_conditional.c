 #include <stdio.h>

 int main() {
    int age, marks;
    printf("Enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult\n") : printf("Not adult\n)");

    marks >= 21 ? printf("Passed\n") : printf("Failed\n");

    return 0;
 } 