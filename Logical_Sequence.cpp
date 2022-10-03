#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, j = 1, k, m, l = 1;

    cin >> n;
    n*=2;

    k = j; m = j;

    while(n--) {
        if(l%2!=0){
            k = pow(k, 2); m = pow(m, 3);
            cout << j  << " " << k << " " << m << "\n";
        } 
        else if(l%2==0) {
            cout << j << " " << k+1 << " " << m+1 << "\n";
            ++j;
            m = j; k = j;
        }
        ++l;
    }


    return 0;

}