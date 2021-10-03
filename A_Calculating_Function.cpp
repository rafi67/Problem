#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, size, result = 0;
    cin >> n;
    
    result = n/2;
    if(n%2==0) cout << result << "\n";
    else {
        result += n%2;
        result = 0 - result;
        cout << result << "\n";
    }

    return 0;

}