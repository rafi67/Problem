#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, result = 0, in = 0;

    cin >> n;
    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
       if(a[i]>0) in += a[i];
       else if(a[i]<0) {
            if(in==0) ++result;
            else if(in!=0) --in;
       }
    }

    cout << result << "\n";

    return 0;

}