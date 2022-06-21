#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long int a[n][n];
        a[0][0] = 1;
        int index = 1;
        for(int i=1; i<n; i++) {
            a[i][0] = 1;
            a[i][index++] = 1;
            for(int j=1; j<i; j++) {
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        } 
    }

    return 0;

}