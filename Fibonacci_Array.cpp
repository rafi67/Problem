#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    unsigned long long n, f[61];
    
    for(int i=0; i<61; ++i) {
        if(i>=0 && i<=1) f[i] = i;
        else f[i] = f[i-1]+f[i-2];
    }

    cin >> t;

    while(t--) {
        cin >> n;
        cout << "Fib(" << n << ") = " << f[n] << "\n";
    }


    return 0;

}