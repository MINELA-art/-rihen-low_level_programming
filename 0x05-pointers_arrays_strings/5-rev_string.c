#include "main.h"
#include <stdio.h>

void rev_string(char *s){
    char *ptr = s;
    while (*ptr != '\0'){
        ptr++;
    }
    while (ptr >= s){
        printf("%c",*ptr);
        ptr--;
    }
}