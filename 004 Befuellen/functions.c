//
// Created by Christoph Krassnigg on 10.05.20.
//

#include <stdio.h>

int read_int(char *prefix) {
    printf("%s", prefix);

    int input;
    scanf("%d", &input);

    return input;
}


void modify_array(int *array, int length, const void (^arrayModifier)(int *arrayToModify, int length)) {
    arrayModifier(array, length);
}


void write_array(char *prefix, const int *array, const int length) {
    printf("%s", prefix);
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i != length - 1)
            printf(", ");
    }
    printf("\n");
}

void modify_and_write(char *prefix, const void (^arrayModifier)(int *arrayToModify, int length), int *array, int length) {
    modify_array(array, length, arrayModifier);
    write_array(prefix, array, length);
}