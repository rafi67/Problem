#include <bits/stdc++.h>

using namespace std;

int main() {

    int n , k, l;

    while(1) {
        
        cin >> n;

        if(cin.eof())
            break;

        int a[n][n];

         k = 0; l = n-1;

        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                if(j==l)
                    a[i][j] = 2;
                else if(j==k)
                    a[i][j] = 1;
                else
                    a[i][j] = 3;
            }
            ++k; --l;
        }



        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) cout << a[i][j];
            cout << "\n";
        }

    }

    return 0;

}