#include "main.h"


void jack_bauer(void){
    int i = 0;
    int j = 0;
    int k = 0;
    int conteur = 0;
    for ( i = 0; i < 3; i ++) {
        for ( j = 0; j < 10; j++){
            _putchar('0' + i);
            _putchar('0' + k);
            _putchar(':');
            _putchar('0' + i);
            _putchar('0' + j);
            _putchar('\n');
            conteur += 1;
        }
        for ( j = 10; j < 60; j++){
            _putchar('0' + i);
            _putchar('0' + k);
            _putchar(':');
            _putchar('0' + (j - j % 10) / 10);
            _putchar('0' + j % 10);
            _putchar('\n');
            conteur += 1;
        }
        _putchar('0' + (conteur - conteur % 10)/10);
        _putchar('0' + conteur % 10);
        _putchar('\n');
        if (conteur == 60){
            k += 1;
            conteur = 0;
            j = 0;
        }
    }
}
                