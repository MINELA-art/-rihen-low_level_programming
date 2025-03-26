#include "main.h"
#include <stdio.h>


char *_strcpy(char *dest, char *src){
    char *ptr = dest;
    while (*src != '\0'){
        *dest = *src;
        src++;
        dest++;    
    }
    if (*src == '\0'){
        *dest = *src;
    }
    
    return ptr;
}