#include <stdio.h>

void prime_factor(void){
    long n =  612852475143;
    long i = 2;
    while (n != 1){
        for ( i = 2; i < n; i++){
            if (n % i == 0){
                printf("%ld,", i);
            }
            n = n / i;
        }
    }
    printf("\n");
}

int main(void){
    prime_factor();
    return (0);
}