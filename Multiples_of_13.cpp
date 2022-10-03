#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, sum = 0;
    cin >> a >> b;

    if(a<b) while (a<=b) {
        if(a%13!=0) sum+=a;
        ++a;
    }
    else if(a>b) while(b<=a) {
        if(b%13!=0) sum+=b;
        ++b;
    }
    else if(a==b) if(a%13!=0) sum+=a;

    cout << sum << "\n";

    return 0;

}