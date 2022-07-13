#include <bits/stdc++.h>

using namespace std;

void counter(int* a, int i, string s, int size) { 
    for(int k=0; k<size; ++k) {
        if(s[k]=='D') {
            if(a[i]==9) a[i] = 0;
            else a[i]+=1;
        }
        else {
            if(a[i]==0) a[i] = 9;
            else a[i]-=1;
        }
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    while(t--) {
        int n, b;
        string s;

        cin >> n;

        int a[n];
        for(int i=0; i<n; ++i) cin >> a[i];

        for(int i=0; i<n; ++i) {
            cin >> b >> s;
            counter(a, i, s, b);
        }
        for(int i=0; i<n; ++i) cout << a[i] << " ";
        cout << "\n";
    }

    return 0;

}