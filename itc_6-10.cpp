#include <iostream>
#include "middle.h"

int itc_min_num(long long number){
    if(number < 0)
        number*=-1;
    if(number < 10)
        return number;
    int minn = 9;
    while(number > 0){
        if(number % 10 < minn)
            minn = number % 10;
        number/=10;
    }
    return minn;
}

int itc_rev_num(long long number){
    if(number < 0)
        number*=-1;
    long long rev = 0;
    int n = 0;
    while (number > 0) {
        rev = rev * 10 + number % 10;
        number /= 10;
    }
   while (rev > 0){
       n++;
       rev/=10;
   }
    return n;
}

int itc_null_count(long long number){
    if(number == 0)
        return 1;
    int n = 0;
    if(number < 0)
        number*=-1;
    while(number > 0){
        if(number % 10 == 0)
            n++;
        number/=10;
    }
    return n;
}

bool itc_mirror_num(long long number){
    long long rev = 0;
    long long number1 = number;
    while (number != 0) {
        rev = rev * 10 + number % 10;
        number /= 10;
    }
    return (number1 == rev);
}

int itc_mirror_count(long long number) {
    int n = 0;
    for (long long i = 1; i <= number; i++) {
        if (itc_mirror_num(i)) {
            n++;
        }
    }
    return n;
}

