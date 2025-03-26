#include "main.h"
#include <stdio.h>

void puts_half(char *str){
    char *ptr = str;
    int taille = 0;
    while (*ptr != '\0'){
        ptr++;
        taille++;
    }
    ptr = str;
    while (ptr <= str + (taille - 1)/2) {
        ptr++;
    }
    while (*ptr != '\0'){

        _putchar(*ptr);
        ptr ++;
    }
    _putchar('\n');
    
}