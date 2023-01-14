#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int n;

    cin >> n;

    while(n!=0) {
        cout << n%10;
        n/=10;
    }

    cout << "\n";

    return 0;

}