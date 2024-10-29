#include <stdio.h>

int main(){
    int numbers1[5];
    int numbers2[5];
    int dif;

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
    
    for(int i = 0; i < 5; i++){
        int dif = numbers2[i] - numbers1[i];
    printf("Різниця елементів %d та %d: %d\n", numbers2[i], numbers1[i], dif);
    }
    
    return 0;
}
