#include "main.h"

void print_times_table(int n){
    int intermediaire;
    int i = 0;
    int j = 0;
    int result = 0;
    for (i = 0; i <= n; i++){
        for (j = 0; j <= n; j++){
            result = i*j;
            if (result <= 9 && (i * (j + 1) > 9)){
                _putchar('0' + (i*j));
                if (j < n){
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                } 
            }else if (result > 9){
                if (result >= 100){
                    intermediaire = (result - result % 10) / 10;
                    _putchar('0' + (intermediaire - intermediaire % 10) / 10);
                    _putchar('0' + (intermediaire % 10));
                    _putchar('0' + result % 10);
                    if (j < n){
                        _putchar(',');
                        _putchar(' ');
                    } 
                }else if(result < 100) {
                    _putchar('0' + (result - result % 10) / 10);
                    _putchar('0' + result % 10);
                    if (j < n){
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
                    } 
                }
            }
            else{
                _putchar('0' + (i*j));
                if (j < n){
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                } 
            }   
        }
        _putchar('\n');
    }
}