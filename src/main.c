#include <stdio.h>

int main(){

    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if(a > 0 || b > 0 || c > 0) {
        printf("There is a positive number.\n");
    } else {
        printf("No number is positive");
    }

    return 0;
}
