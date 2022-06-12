#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    bool right = true, left = false;

    cin >> n >> m;

    for(int i=1; i<=n; i++) {
        for(int j=0; j<m; j++) {
            if(i%2!=0) cout << "#";
            else {
                if(right) {
                    
                    if(j==m-1) {
                        cout << "#";
                        right = false;
                        left = true;
                    }
                    else cout << ".";

                }

                else if(left) {
                    if(j==0) {
                        cout << "#";
                    }
                    else if(j!=0) {
                        cout << ".";
                    }
                    if(j==m-1) {
                        left = false;
                        right = true;
                    }
                }
            }
        }
        cout << "\n";
    }

    return 0;

}