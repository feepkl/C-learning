#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(){
   int num1 = 10, num2 = 5;
 
   int addition = add(num1, num2);

   printf("Result: %d\n", addition);

   return 0;
}
