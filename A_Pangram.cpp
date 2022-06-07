#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);

    int n;
    string s;

    cin >> n >> s;

    int result = 0;

    char c = 'A';

    for(int i=0; i<n; i++) {
        s[i] = toupper(s[i]);
    }

    int k = 0, j = 0;

    if(n>= 26) {
        while(k<n) {
            if(s[j]==c) {
                result++;
                c++;
            }
            j++;
            if(j==n) {
                k++;
                j=0;
            }
        }
        if(result==26) cout << "YES\n";
        else cout << "NO\n";
    }

    else cout << "NO\n";

    return 0;

}