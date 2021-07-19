#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    for_each(s1.begin(), s1.end(), [](char &c) {
        c = ::tolower(c);
    });

    for_each(s2.begin(), s2.end(), [](char &c) {
        c = ::tolower(c);
    });

    if(s1==s2) cout << 0 << "\n";
    else if(s1>s2) cout << 1 << "\n";
    else cout << -1 << "\n";

    return 0;

}