#include "main.h"


void more_numbers(void){
    int i = 0;
    int j = 0;
    int k = 0;
    for (j = 0; j <= 10; j ++){
        for (i = 0; i <= 9; i ++){
            _putchar('0' + i);
        }
        for (k = 0; k <= 4; k++){
            _putchar('1');
            _putchar('0' + k);
        }
        
        _putchar('\n');
    }
}