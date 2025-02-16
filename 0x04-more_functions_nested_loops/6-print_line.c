#include "main.h"


void print_line(int n){
    int i = 1;
    if (n <= 0){
        _putchar('\n');
    }
    if (n > 0){
        for (i = 1; i <= n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');
    }
    
}