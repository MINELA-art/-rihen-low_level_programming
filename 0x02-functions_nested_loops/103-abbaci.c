#include "main.h"
#include <stdio.h>

void abbaci(){
    int i = 1;
    int j = 2;
    int k = 0;
    int conteur = 0;
    printf("%d", j);
    printf(", ");
    for(conteur = 0; k <= 4000000; conteur++){
        k = i + j;
        if (conteur % 2 == 1) {
            printf("%d", k);
            if (conteur < 47){
            printf(", ");
            }
        }
        i = j;
        j = k;
    }
    printf("\n");
}