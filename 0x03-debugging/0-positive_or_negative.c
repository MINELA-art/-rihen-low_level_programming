#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int positive_or_negative(int n){

	/* your code goes there */
    if (n > 0){
        printf("%d", n);
        printf(" is positive \n");
    }
    if (n < 0){
        printf("%d", n);
        printf(" is negative \n");
    }
    if (n == 0){
        printf("%d", n);
        printf(" is zero \n");
    }
	return (0);
}