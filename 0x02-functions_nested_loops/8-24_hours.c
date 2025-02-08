#include "main.h"


void jack_bauer(void){
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    while (i <= 2) {
        while (j <= 3) {
            while(k <= 5 ){
                while (l <= 9) {
                    _putchar('0' + i);
                    _putchar('0' + j);
                    _putchar(':');
                    _putchar('0' + k);
                    _putchar('0' + l);
                    _putchar('\n');
                    l += 1;
                }
                l = 0;
                k += 1;
            }
            k = 0;
            j += 1;
        }
        j = 0;
        i += 1;
    }
}
                