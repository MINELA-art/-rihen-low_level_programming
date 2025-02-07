#include "main.h"

int print_last_digit(int n) {
    int reste = 0;
    if (n < 0) {
        n = -n;
    }
    reste = n % 10;
    _putchar(reste + '0');
    return reste;
}