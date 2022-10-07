#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, l1 = 1, l2 = 1, a = 0;

    while(1) {
        cin >> n;
        if(n==0)
            break;
        
        int M[n][n];

        for(int i=a; i<n; ++i, ++a) {
            for(int j=a; j<n; ++j)
                M[i][j] = l1++;
            for(int j=i; j<n; ++j)
                M[j][i] = l2++;
            l1 = 1; 
            l2 = 1;
        }

        a = 0;

        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                if(j==0)
                    cout << setw(3) << M[i][j];
                else
                    cout << setw(4) << M[i][j];
            }
            cout << "\n";
        }
        
        cout << "\n";

    }

    return 0;

}