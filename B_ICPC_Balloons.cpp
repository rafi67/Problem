#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        
        cin >> n >> s;

        set<char>s2;

        for(int i=0; i<s.size(); i++) {
            s2.insert(s[i]);
        }

        int result = n - s2.size();
        result = (n*2) - result;
        cout << result << "\n";
    }

    return 0;

}