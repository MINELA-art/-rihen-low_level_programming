#include "main.h"
#include <stdio.h>

void somme_multiples(void) {
    int somme1 = 0;
    int somme2 = 0;
    int somme = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < 1024; i += 3) {
        somme1 = somme1 + i;
    }
    for (j = 0; j < 1024; j += 5) {
        somme2 = somme2 + j;
    }
    somme = somme1 + somme2;
    printf("%d\n", somme);
}