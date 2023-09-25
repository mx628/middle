int itc_covert_num(long long number, int ss){
    long long binare = 0, n = 1;
    while (number > 0){
        binare += (number % ss) * n;
        n*=10;
        number/=ss;
    }
    return binare;
}

int itc_rev_covert_num(long long number, int ss){
    long long dec = 0;
    int step = 0;
    while(number > 0){
        dec += number % 10 * itc_pow(ss, step);
        number/=10;
        ++step;
    }
    return dec;
}
