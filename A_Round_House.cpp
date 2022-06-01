#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    
    int n, a, b, result;

    cin >> n >> a >> b;

    b = b%n;
    
    if(b<0) result = n+a+b;
    else result = a+b;

    if(result%n==0) cout << n << "\n";
    else cout << result%n << "\n";

    return 0;
    
}