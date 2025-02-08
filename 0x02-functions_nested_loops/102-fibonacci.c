#include "main.h"
#include <stdio.h>

void fibonacci_50(){
    int i = 1;
    int j = 2;
    int k = 0;
    int conteur = 0;
    printf("%d", i);
    printf(", ");
    printf("%d", j);
    printf(", ");
    for(conteur = 0; conteur < 48; conteur++){
        k = i + j;
        printf("%d", k);
        if (conteur < 47){
            printf(", ");
        }
        
        i = j;
        j = k;
    }
    printf("\n");
}