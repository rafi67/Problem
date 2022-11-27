#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    for(int i=1; i<=t; ++i) {
        string a;
        int b;
        cin >> a >> b;
        long rem = 0;
        int j = 0;
        if(a[0]=='-') j = 1;
        if(b<0) b = abs(b);
        for(; j<a.size(); j++) {
            rem = rem*10+(a[j]-'0');
            rem %= b;
        }
        if(rem==0) cout << "Case " << i << ": divisible\n";
        else cout << "Case " << i << ": not divisible\n";
    }

    return 0;

}