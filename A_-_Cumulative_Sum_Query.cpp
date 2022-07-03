#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n], pre[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(i==0) pre[i] = a[i];
        else pre[i] = pre[i-1] + a[i];
    }

    int t;
    cin >> t;

    while(t--) {
        int i, j;
        cin >> i >> j;
        if(i>0) cout << pre[j]-pre[i-1] << "\n";
        else if(i==0) cout << pre[j] << "\n"; 
    }

    return 0;

}