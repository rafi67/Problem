#include <bits/stdc++.h>

using namespace std;

int main() {

    int positive_cnt = 0, negative_cnt = 0, even_cnt = 0, odd_cnt = 0, num;
    
    for(int i=0; i<5; ++i) {
        cin >> num;
        if(num==0) ++even_cnt;
        else if(num>0 && num%2==0) {
            ++positive_cnt;
            ++even_cnt;
        }
        else if(num>0 && num%2!=0) {
            ++positive_cnt;
            ++odd_cnt;
        }
        else if(num<0 && num%2==0) {
            ++negative_cnt;
            ++even_cnt;
        }
        else {
            ++negative_cnt;
            ++odd_cnt;
        }
    }

    cout << even_cnt << " valor(es) par(es)\n" << odd_cnt << " valor(es) impar(es)\n"
    << positive_cnt << " valor(es) positivo(s)\n" << negative_cnt
    << " valor(es) negativo(s)\n";

    return 0;

}