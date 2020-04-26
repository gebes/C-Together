#include "iqField.h"
#include <stdio.h>
#include <stdlib.h>


void print(struct iqValues values) {
    for (int i = 0; i < values.length; i++) {
        printf("%d", values.arr[i]);
        if (i < values.length - 1)
            printf(" - ");
    }
    printf("\n");
}

int minValue(struct iqValues values) {
    int min = values.arr[0];
    for (int i = 0; i < values.length; i++)
        if (values.arr[i] < min)
            min = values.arr[i];

    return min;
}

int maxValue(struct iqValues values) {
    int max = values.arr[0];
    for (int i = 0; i < values.length; i++)
        if (values.arr[i] > max)
            max = values.arr[i];
    return max;
}

float average(struct iqValues values) {
    int sum = 0;
    for (int i = 0; i < values.length; i++)
        sum += values.arr[i];
    return sum / (float) values.length;
}

int countBelow(struct iqValues values, int valueToCheck) {
    int count = 0;
    for (int i = 0; i < values.length; i++)
        if (values.arr[i] < valueToCheck)
            count++;

    return count;
}

int countAbove(struct iqValues values, int valueToCheck) {
    int count = 0;
    for (int i = 0; i < values.length; i++)
        if (values.arr[i] > valueToCheck)
            count++;

    return count;
}

void mostCommonIq(struct iqValues values, int *commonIq, int *count) {

    // Erzeuge eine Map
    // index = key
    // map[index] = value
    int map_size = maxValue(values) + 1;
    int *map = malloc(map_size * sizeof(int));

    for (int i = 0; i < map_size; i++)
        map[i] = 0;

    int highestKey = 0, highestValue = 0;
    for (int i = 0; i < values.length; i++) {
        map[values.arr[i]]++;
        if (map[values.arr[i]] > highestValue) {
            highestKey = values.arr[i];
            highestValue = map[values.arr[i]];
        }
    }

    *commonIq = highestKey;
    *count = highestValue;

}

int cmpfunc(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

void sort(struct iqValues *values) {
    qsort(values->arr, values->length, sizeof(int), cmpfunc);
}

int median(struct iqValues values) {
    return (values.length % 2 == 0) ?
           (values.arr[(values.length - 1) / 2] + values.arr[values.length / 2]) / 2.0
                                    :
           values.arr[values.length / 2];
}