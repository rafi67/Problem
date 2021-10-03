#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, s2;
    int size;
    cin >> s;
    cin >> s2;
    size = s.length();
    for(int i=0; i<size; i++) {
        if(s[i]!=s2[i]) printf("1");
        else printf("0");
    }

    return 0;

}