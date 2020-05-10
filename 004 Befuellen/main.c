#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// http://clang.llvm.org/docs/BlockLanguageSpec.html
// "Blocks", wie diese hier, funktionieren nur auf Mac OS X 10.6 oder höher,
// da es eine C-Erweiterung von Apple ist

void (^naturalModifier)(int *, int) = ^void(int *arrayToModify, int length) {
    for (int i = 0; i < length; i++) {
        arrayToModify[i] = i + 1;
    }
};

void (^powModifier)(int *, int) = ^void(int *arrayToModify, int length) {
    for (int i = 0; i < length; i++) {
        arrayToModify[i] = (i + 1) * (i + 1);
    }
};

void (^fibonacciModifier)(int *, int) = ^void(int *arrayToModify, int length) {
    int f1 = 0, f2 = 1;
    for (int i = 0; i < length; i++) {
        arrayToModify[i] = f2;
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
};

void (^xyzModifier)(int *, int) = ^void(int *arrayToModify, int length) {
    for (int i = 0; i < length; i++) {
        arrayToModify[i] = 6 + (i * 4);
    }
};

void (^abcModifier)(int *, int) = ^void(int *arrayToModify, int length) {
    for (int i = 0, curr = 3; i < length; curr++) {
        if (curr % 3 == 0 || curr % 5 == 0) {
            arrayToModify[i] = curr;
            i++;
        }
    }
};

int main() {

    int *array;
    int length = read_int("Größe des Array's: ");

    array = malloc(length * sizeof(int));

    modify_and_write("Natürliche Zahlen: ", naturalModifier, array, length);
    modify_and_write("Quadrat Zahlen: ", powModifier, array, length);
    modify_and_write("Fibonacci Zahlen: ", fibonacciModifier, array, length);
    modify_and_write("\"xyz\" Zahlenfolge: ", xyzModifier, array, length);
    modify_and_write("\"abc\" Zahlenfolge: ", abcModifier, array, length);

    free(array);

    return 0;
}
