#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k = 0, l = 1, cnt = 0, n2;

    while(1) {
        
        cin >> n;

        if(n==0)
            break;
    
        int M[n][n];
        
       int hn = n/2;
       if(n%2!=0) ++hn;

       n2 = n;

       if(n>2) {
            for(int i=0; i<hn; ++i) {
                for(int j=k; j<n2; ++j)
                    for(int h=k; h<n2; ++h)
                        M[j][h] = l;
                ++l;
                ++k;
                --n2;
            }
       }
       
       else 
            for(int i=0; i<n; ++i)
                for(int j=0; j<n; ++j)
                    M[i][j] = 1;

        l = 1;
        k = 0;

       for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j)
                if(j==0)
                    cout << setw(3) << M[i][j];
                else
                    cout << setw(4) << M[i][j];
            cout << "\n";
       }
            
        cout << "\n";
        
    }
    


    return 0;

}