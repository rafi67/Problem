#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a[3];
        int key, count = 0;
        cin >> key;
        for(int i=0; i<3; ++i) cin >> a[i];

        int n = 3;

        while(true) {
            if(key==0) break;
            key = a[key-1];
            ++count;
        }

        
        if(count==3) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}