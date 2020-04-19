#include <stdio.h>
#include <math.h>

int isMuenchhausenNumber(int number);

int main() {

    int input; // var
    printf("Bitte eine Zahl eingeben: ");
    scanf("%d", &input);

    int result = isMuenchhausenNumber(input);
    printf("Die Zahl %d ist %seine Muenchhausen-Zahl", input, (result ? "" : "k"));

    return 0; 
}

int isMuenchhausenNumber(int numberToTest) {
    unsigned int sum = 0;

    int digits = numberToTest;

    while (digits) {
        int currentDigit = digits % 10;
        sum += pow(currentDigit, currentDigit);
        digits /= 10;
    }

    return sum == numberToTest;
}

