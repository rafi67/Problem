#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, x, sum = 0;
    cin >> t;

    while(t--) {
        cin >> x;
        for(int i=1; i<x; ++i) if(x%i==0) sum+=i; 
        if(sum==x) cout << x << " eh perfeito\n";
        else cout << x << " nao eh perfeito\n";
        sum = 0;
    }

    return 0;

}