#include "main.h"


void print_square(int size){
    int i = 0;
    int j = 0;
    if (size <= 0) {
        _putchar('\n');
    }
    else if (size > 0) {
        for ( i = 0; i < size; i++) {
            for ( j = 0; j < size; j++) {
                _putchar('#');
            }
        _putchar('\n');
        }
    }
}