#include <iostream>
#include "middle.h"

int itc_second_max_num(long long number) {
    int max1 = -1, max2 = -1;
    if(number < 10)
        return -1;
        int n;
    while (number > 0) {
        n = number % 10;
        if (n > max1) {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2 && n <= max1) {
            max2 = n;
        }
        number /= 10;
    }
    return max2;
}


int itc_second_simple_max_num(long long number) {//ÍÀÄÎ ÏÅÐÅÄÅËÀÒÜ
    int max1 = -1, max2 = -1;
    if(number < 10)
        return -1;
        int n;
    while (number > 0) {
        n = number % 10;
        if (n > max1) {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2 && n <= max1) {
            max2 = n;
        }
        number /= 10;
    }
    if(max1 == max2)
        return -1;
    return max2;
}

long long itc_bin_num(long long number){
    int binare = 0, n = 1;
    while (number > 0){
        binare += (number % 2) * n;
        n*=10;
        number/=2;
    }
    return binare;
}

long long itc_oct_num(long long number){
    int binare = 0, n = 1;
    while (number > 0){
        binare += (number % 8) * n;
        n*=10;
        number/=8;
    }
    return binare;
}

int itc_rev_bin_num(long long number){
    int dec = 0;
    int step = 0;
    while(number > 0){
        dec += itc_pow(number % 10 * 2, step);
        number/=10;
        ++step;
    }
    return dec;
}
