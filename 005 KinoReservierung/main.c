//
// Created by Christoph Krassnigg on 16.06.20.
//

#include <stdio.h>
#include <stdlib.h>

void printPlaces();

void fillPlaces();

void printLine(int width);

int *allocate_mem(int ***arr, int n, int m);

void deallocate_mem(int ***arr, int *arr_data);

int **places;
int rows, columns;

int main() {


    printf("ROWS: ");
    scanf("%d", &rows);
    printf("COLUMNS: ");
    scanf("%d", &columns);

    int *arr_data = allocate_mem(&places, rows, columns);

    fillPlaces();
    printPlaces();

    deallocate_mem(&places, arr_data);

    return 0;
}

void printPlaces() {
    printf(" ");
    for (int j = 0; j < columns; j++) {
        printf("|%d", j+1);
    }
    printf("|\n");
    printLine(columns * 2 + 2);
    for (int i = 0; i < rows; i++) {
        printf("%d", i+1);
        for (int j = 0; j < columns; j++) {
            printf("|%d", places[i][j]);
        }
        printf("|\n");
        printLine(columns * 2 + 2);
    }
}

void fillPlaces() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            places[i][j] = 0;
        }
    }
}

void printLine(int width) {
    for (int i = 0; i < width; i++) {
        printf("-");
    }
    printf("\n");
}

int *allocate_mem(int ***arr, int n, int m) {
    *arr = (int **) malloc(n * sizeof(int *));
    int *arr_data = malloc(n * m * sizeof(int));
    for (int i = 0; i < n; i++)
        (*arr)[i] = arr_data + i * m;
    return arr_data;
}

void deallocate_mem(int ***arr, int *arr_data) {
    free(arr_data);
    free(*arr);
}
