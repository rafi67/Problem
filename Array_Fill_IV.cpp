#include <bits/stdc++.h>

using namespace std;

int main() {

    int even[5], odd[5], num[15],
    even_cnt = 0, odd_cnt = 0, t = 15,
    i=0, j=0;
    
    for(int k=0; k<15; ++k) cin >> num[k];

    for(int k=0; k<15; ++k) {
        if(num[k]%2==0 && even_cnt!=5) {
            even[i++] = num[k];
            ++even_cnt;
        }
        else if(num[k]%2!=0 && odd_cnt!=5) {
            odd[j++] = num[k];
            ++odd_cnt;
        }
        else if(even_cnt==5) {
            for(int h=0; h<5; ++h)
                cout << "par[" << h << "] = " << even[h] << "\n";
            i = 0;
            even_cnt = 0;
            for(int h=0; h<5; ++h)
                even[h] = 0;
            if(num[k]%2==0 && even_cnt!=5) {
                even[i++] = num[k];
                ++even_cnt;
            }
            else if(num[k]%2!=0 && odd_cnt!=5) {
                odd[j++] = num[k];
                ++odd_cnt;
            }
        }
        else if(odd_cnt==5) {
            for(int h=0; h<5; ++h)
                cout << "impar[" << h << "] = " << odd[h] << "\n";
            odd_cnt = 0;
            j = 0;
            for(int h=0; h<5; ++h) 
                odd[h] = 0;
            if(num[k]%2==0 && even_cnt!=5) {
                even[i++] = num[k];
                ++even_cnt;
            }
            else if(num[k]%2!=0 && odd_cnt!=5) {
                odd[j++] = num[k];
                ++odd_cnt;
            }
        }
        if(k==14) {
            for(int h=0; h<odd_cnt; ++h)
                cout << "impar[" << h << "] = " << odd[h] << "\n";
            for(int h=0; h<even_cnt; ++h)
                cout << "par[" << h << "] = " << even[h] << "\n";
        }
    }

    return 0;

}