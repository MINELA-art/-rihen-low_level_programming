#include "main.h"
#include <stdio.h>

int _strlen(char *s){
    char *ptr = s;
    while (*ptr != '\0'){
        ptr++;
    }
    return ptr - s;
    
}