 #include <stdio.h>

 int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Adult\n");
        printf("He can vote\n");
    }
    else if(age > 13 && age < 18) {     
        printf("Teenager\n");  // Curly brackets are not needed if printing only 1 statement
    }
    else {
        printf("Child\n");
    }


    printf("Have a nice day");
    return 0;
 }