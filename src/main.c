#include <stdio.h>

float calculateAverage(int temps[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += temps[i];
    }
    return (float)sum / size;
}

void findMinMax(int temps[], int size, int *min, int *max) {
    *min = temps[0];
    *max = temps[0];
    for(int i = 1; i < size; i++) {
        if(temps[i] < *min) {
            *min = temps[i];
        }
        if(temps[i] > *max) {
            *max = temps[i];
        }
    }
}

int countBelowAverage(int temps[], int size, float average) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(temps[i] < average) {
            count++;
        }
    }
    return count;
}

int main() {
    int temps[7] = {12, 9, 10, 0, 2, 6, 4};
    int size = sizeof(temps) / sizeof(temps[0]);

    float average = calculateAverage(temps, size);
    int min, max;
    findMinMax(temps, size, &min, &max);
    int belowAverageDays = countBelowAverage(temps, size, average);

    printf("Середня температура за тиждень: %.2f\n", average);
    printf("Найнижча температура: %d\n", min);
    printf("Найвища температура: %d\n", max);
    printf("Кількість днів з температурою нижче середньої: %d\n", belowAverageDays);

    return 0;
}
