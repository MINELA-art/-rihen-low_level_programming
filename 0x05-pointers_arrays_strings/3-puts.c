#include "main.h"


void _puts(char *str){
    char *ptr = str;
    while (*ptr != '\0'){
        _putchar(*ptr);
        ptr++;
    }
    _putchar('\n');
}