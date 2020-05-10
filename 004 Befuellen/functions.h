//
// Created by Christoph Krassnigg on 10.05.20.
//

#ifndef INC_004_BEFUELLEN_FUNCTIONS_H
#define INC_004_BEFUELLEN_FUNCTIONS_H


int read_int(char *prefix);

void modify_array(int *array, int length, const void (^arrayModifier)(int *arrayToModify, int length));

void write_array(char *prefix, const int *array, int length);

void modify_and_write(char * prefix, const void (^arrayModifier)(int *arrayToModify, int length), int *array, int length);



#endif //INC_004_BEFUELLEN_FUNCTIONS_H
