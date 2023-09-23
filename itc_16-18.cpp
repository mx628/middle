#include <iostream>
#include "middle.h"

int itc_rev_oct_num(long long number){
    int dec = 0;
    int step = 0;
    while(number > 0){
        dec += number % 10 * itc_pow(8, step);
        number/=10;
        ++step;
    }
    return dec;
}

int itc_covert_num(long long number, int ss){
    int binare = 0, n = 1;
    while (number > 0){
        binare += (number % ss) * n;
        n*=10;
        number/=ss;
    }
    return binare;
}

int itc_rev_covert_num(long long number, int ss){
    int dec = 0;
    int step = 0;
    while(number > 0){
        dec += number % 10 * itc_pow(ss, step);
        number/=10;
        ++step;
    }
    return dec;
}
