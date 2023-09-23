#include <iostream>
#include "middle.h"

double itc_pow(int num, int step){
    if(num == 0)
        return 0;
    double num2 = 1;
    double num3 = num;
    if (step < 0) {
        num3 = 1 / num3;
        step = -step;
    }
    for (int i = 0; i < step; i++)
        num2 *= num3;
    return num2;
}
