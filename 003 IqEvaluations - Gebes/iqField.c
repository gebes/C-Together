#include <stdio.h>
#include "iqField.h"


void print(struct iqValues values) {
    printf("Liste der IQs:\n");
    for (int i = 0; i < values.length; i++) {
        printf("%d", values.arr[i]);
        if (i < values.length - 1)
            printf(" - ");
    }
    printf("\n");
}

int min(struct iqValues values) {
    int min = values.arr[0];
    for (int i = 0; i < values.length; ++i) {
        if (values.arr[i] < min)
            min = values.arr[i];
    }
    return min;
}

int max(struct iqValues values) {
    int max = values.arr[0];
    for (int i = 0; i < values.length; ++i) {
        if (values.arr[i] > max)
            max = values.arr[i];
    }
    return max;
}

float average(struct iqValues values) {
    int sum = 0;
    for (int i = 0; i < values.length; ++i)
        sum += values.arr[i];
    return sum / (float) values.length;
}