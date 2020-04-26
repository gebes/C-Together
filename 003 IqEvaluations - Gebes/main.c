#include <stdio.h>
#include "iqField.h"


int main() {
    struct iqValues values = {13, {131, 101, 75, 103, 110, 89, 101, 90, 127, 101, 94, 102, 102}};
    print(values);
    printf("Minimale IQ: %d\n", min(values));
    printf("Maximale IQ: %d\n", max(values));
    printf("Durchschni IQ: %0.2f\n", average(values));
}

