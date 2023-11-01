// find perimeter of rectangle (length and width is given and formula is 2(l+b)

#include <stdio.h>

int main() {
    int length;
    int width;
    printf("enter length");
    scanf("%d", &length);

    printf("enter width");
    scanf("%d", &width);
    
    printf("perimeter of rectangle is : %d", 2 * length + 2 * width);
    return 0;
}