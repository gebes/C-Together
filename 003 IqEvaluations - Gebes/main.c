#include <stdio.h>
#include "iqField.h"


int main() {
    struct iqValues values = {13, {131, 101, 75, 103, 110, 89, 101, 90, 127, 101, 94, 102, 102}};
    printf("Liste der IQs: \n");
    print(values);
    printf("Minimale IQ: %d\n", minValue(values));
    printf("Maximale IQ: %d\n", maxValue(values));
    float av = average(values);
    printf("Durchschnittliche IQ: %0.2f\n", av);
    printf("Anzahl der IQs mit Wert < %0.2f betraegt: %d\n", av, countBelow(values, (int) av));
    printf("Anzahl der IQs mit Wert > %0.2f betraegt: %d\n", av, countAbove(values, (int) av));
    int commonIq, count;
    mostCommonIq(values, &commonIq, &count);
    printf("Der haeufigste IQ ist %d und er kommt %d mal vor\n", commonIq, count);

    printf("Sortierte Liste: \n");
    sort(&values);
    print(values);
    printf("Median: %d\n", median(values));
}

