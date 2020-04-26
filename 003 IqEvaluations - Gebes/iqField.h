
struct iqValues {
    int length;
    int arr[13];
};

void print(struct iqValues);

int minValue(struct iqValues);

int maxValue(struct iqValues);

float average(struct iqValues values);

int countAbove(struct iqValues values, int valueToCheck);

int countBelow(struct iqValues values, int valueToCheck);

void mostCommonIq(struct iqValues values, int * commonIq, int * count);

void sort(struct iqValues * values);