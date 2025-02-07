#include "main.h"

void times_table(void){
    int i = 0;
    int j = 0;
    int result = 0;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            result = i*j;
            if (result <= 9 && (i * (j + 1) > 9)){
                _putchar('0' + (i*j));
                if (j < 9){
                    _putchar(',');
                    _putchar(' ');
                } 
            }else if (result > 9){
                _putchar('0' + (result - result % 10) / 10);
                _putchar('0' + result % 10);
                if (j < 9){
                    _putchar(',');
                    _putchar(' ');
                } 
            }
            else{
                _putchar('0' + (i*j));
                if (j < 9){
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                } 
            }
            /*if (j < 9){
                if (result > 9){
                    _putchar(',');
                    _putchar(' ');
                }else{
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                }
            }*/   
        }
        _putchar('\n');
    }
}