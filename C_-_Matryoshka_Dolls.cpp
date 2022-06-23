#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, x, result = 0;
    cin >> s >> x;

    while(s!=0) {
        s/=x;
        result++;
    }

    cout << result << "\n";

    return 0;

}