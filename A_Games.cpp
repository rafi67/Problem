#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);

    int n, result = 0;
    cin >> n;
    int h[n], a[n];

    for(int i=0; i<n; i++) {
        cin >> h[i] >> a[i];
    }

    int k = 0, j = 0;

    while(k<n) {
        if(h[k]==a[j]) result++;
        j++;
        if(j==n) {
            j = 0;
            k++;
        }
    }

    cout << result << "\n";

    return 0;

}