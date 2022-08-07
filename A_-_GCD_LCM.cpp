#include <bits/stdc++.h>
#define ln "\n";

using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    int gc = gcd(b, a%b);
    return gc; 
}

long int lcm(long int a, long int b) {
    return (long int) (a*b)/gcd(a,b);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        long int a, b;
        cin >> a >> b;

        long int g = gcd(a, b), l = lcm(a, b);

        if(g==a && b==l) {cout << g << " " << l << ln;}
        else cout << -1 << ln;
    }

    return 0;

}