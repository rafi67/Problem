#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, l, s, z, n2, c;

    while(1) {
        cin >> n;
        if(cin.eof())
            break;

        s = (n/2)+1,
        z = n/3, l=0, k=n-1, n2 = n;
        n2-=z, c = s-1;

        int M[n][n];

        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                if(i>=z && i<n2 && j>=z && j<n2) 
                    M[i][j] = 1;
                else if(j==l)
                    M[i][j] = 2;
                else if(j==k)
                    M[i][j] = 3;
                else
                    M[i][j] = 0;
            }
            --k; ++l;
        }

        M[c][c] = 4;

        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) 
                cout << M[i][j];
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;

}