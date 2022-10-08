#include <bits/stdc++.h>

using namespace std;

int digit_cnt(int n) {
    int num = 0;
    while(n!=0) {
        ++num;
        n/=10;
    }
    return num;
}

int main() {

    int n, l;

    while(1) {
        l = 1;
        cin >> n;
        if(n==0)
            break;
        
        long long M[n][n];

        for(int i=0; i<n; ++i) {
            M[i][0] = l;
            l*=2;
            for(int j=1; j<n; ++j)
                M[i][j] = M[i][j-1]*2;
        }

        int space = digit_cnt(M[n-1][n-1]);

        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                if(j==0)
                    cout << setw(space) << M[i][j];
                else
                    cout << setw(space+1) << M[i][j];
            }
            cout << "\n";
        }
        cout << "\n";

    }

    return 0;

}