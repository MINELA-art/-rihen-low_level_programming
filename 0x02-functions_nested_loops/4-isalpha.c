#include "main.h"


int _isalpha(int c){
    if (c >= 'a' && c <= 'z'){
        return 1;
    }
    if (c >= 'A' && c <= 'Z'){
        return 1;
    }else{
        return 0;
    }
}