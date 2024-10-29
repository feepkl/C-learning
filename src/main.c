#include <stdio.h>

int main(){
    int numbers1[5];
    int numbers2[5];

    for(int i = 0; i < 5; i++) {
       numbers1[i] = i + 1;
    } 
    for(int i = 0; i < 5; i++) {
       numbers2[i] = i + 10;
    }

    printf("Числа у першому масиві: \n");

    for(int i = 0; i < 5; i++) {
        printf ("%d\n", numbers1[i]);
    }

    printf("\n");

    printf("Числа у другому масиві: \n");

    for (int i = 0; i < 5; i++){
        printf ("%d\n", numbers2[i]);
    }

    printf("\n");

    return 0;
}
