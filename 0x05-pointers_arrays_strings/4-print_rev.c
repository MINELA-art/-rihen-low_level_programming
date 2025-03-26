#include "main.h"
#include <stdio.h>


void print_rev(char *s){
    char *ptr = s;
    while (*ptr != '\0'){
        ptr++;
    }
    while (ptr >= s){
        _putchar(*ptr);
        ptr--;
    }
    _putchar('\n');   
}