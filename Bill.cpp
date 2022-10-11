#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, n, sum;
    cin >> t;
    while(t--) {
        sum = 0;
        cin >> n;
        for(int i=0; i<n; ++i) {
            if(i%2==0)
                sum+=1;
            else
                sum-=1;
        }
        cout << sum << "\n";
    }

    return 0;

}