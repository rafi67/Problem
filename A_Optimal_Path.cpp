#include <bits/stdc++.h>

using namespace std;

long long int num(long long int n, long long int m) {
    long long int result = (long long int) (m*(m+1))/2;
    return result;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long int n, m;
        long long int sum = 0;
        cin >> n >> m;
        sum += num(n, m);

        for(int i=0; i<n; i++) {
            if(i!=0) {
                sum += m*(i+1);
            }
        }

        cout << sum << "\n";
    }

    return 0;

}