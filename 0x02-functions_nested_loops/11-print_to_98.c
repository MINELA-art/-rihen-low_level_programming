#include "main.h"
#include <stdio.h>

void print_to_98(int n) {
    if (n < 98){
        while (n <= 98) {
            printf("%d", n);
            n = n + 1;
            if (n < 98) {
                printf(", ");
            }
        }    
    }else if (n >= 98){
        while (n >= 98){
            printf("%d", n);
            if (n > 98) {
                printf(", ");
            }
            
            n = n - 1;
        }
    }
    printf("\n");
}