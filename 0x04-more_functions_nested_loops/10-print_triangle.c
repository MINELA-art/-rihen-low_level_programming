#include "main.h"


void print_triangle(int size){
    int i = 0;
    int j = 0;
    int cont = size - 1;
    if (size <= 0) {
        _putchar('\n');
    }
    else if (size > 0) {
        for ( j = 0; j < size; j++) {
            for ( i = 0; i < size; i++) {
                do{
                    for ( i = 0; i < cont; i++){
                    _putchar(' ');
                    }
                    for ( i = cont; i < size; i++) {
                        if (cont >= 0){
                            _putchar('#');
                        }
                    }
                    cont -= 1;
                    _putchar('\n');
                    break;
                } while (cont >= 0 && j < size);
            }
        }
    } 
}