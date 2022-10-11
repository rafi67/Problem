#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, cnt = 0, l = 20;
    cin >> n;

    int a[n];

    for(int i=0; i<n; ++i)
        cin >> a[i];
    
    for(int i=0; i<n; ++i)
        if(a[i]<l) {
            l = a[i];
            cnt = i+1;
        }


    cout << cnt << "\n";

    return 0;

}