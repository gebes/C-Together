#include<stdlib.h>
#include<stdio.h>

int random(int min, int max) {
    return min + rand() % (max + 1 - min);
}

int count(int * arr, int size, int min, int max){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] >= min && arr[i] <= max)
            count++;
    }
    return count;
}

float percentage(int anteil, int grundwert){
    return ((float) anteil / (float) grundwert) * 100;
}

void calculateArea(int * arr, int size, char * category, int min, int max){
    int c = count(arr, size, min, max);
    printf("   %3d - %3d  %40s  %0.2f%%\n", min, max, category, percentage(c, 1000));
}