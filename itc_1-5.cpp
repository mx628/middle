#include <iostream>
#include "middle.h"
using namespace std;

void itc_num_print(int number){
    std::cout << number;
}
int itc_len_num(long long number){
    if(number == 0) //0 это одна цифра
        return 1;
    if(number < 0)
        number*=-1;
    int len = 0;
    while (number > 0){
        len++;
        number/=10;
    }
    return len;
}

int itc_sum_num(long long number){
    int sumn = 0;
    if(number < 0)
        number*=-1;
    while(number > 0){
        sumn += number % 10;
        number/=10;
    }
    return sumn;
}

long long itc_multi_num(long long number){
    long long mult = 1;
    if(number < 0)
        number*=-1;
    while(number > 0){
        mult *= number % 10;
        number/=10;
    }
    return mult;
}

int itc_max_num(long long number){
    int maxx = 0;
    if(number < 0)
        number*=-1;
    while(number > 0){
        if(number % 10 > maxx)
            maxx = number % 10;
        number/=10;
    }
    return maxx;
}
