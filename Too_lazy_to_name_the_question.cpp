#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int cth_number;

    for(int i=2; c>0; i++) {
        if(i%a==0 || i%b==0) {
            c--;
            cth_number = i;
        }
    }

    int Lcm;

    for(int i=1; i<=a*b; ++i) {
        if(i%a==0 && i%b==0) {
            Lcm = i;
            break;
        }
    }
    
     int s;

    if(cth_number%a==0 && cth_number%b==0) s = Lcm;
    else if(cth_number%a==0) s = a;
    else if(cth_number%b==0) s = b;

    for(int i=cth_number; i>=0; i=i-s) {
        cout << i << " ";
    }

    return 0;

}