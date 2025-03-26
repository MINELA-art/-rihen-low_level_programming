#include "main.h"

void puts2(char *str) {
    char *ptr = str;
    for (ptr = str; *ptr != '\0'; ptr += 2){
        _putchar(*ptr);
    }
    _putchar('\n');
        
}