#include <bits/stdc++.h>

using namespace std;

char upper(char c) {
    return 'A'+(c-'a');
}

char lower(char c) {
    return 'a'+(c-'A');
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for(int i=0; i<s.size(); ++i) {
        if(s[i]>='A' && s[i]<='Z') s[i] = lower(s[i]);
        else if(s[i]>='a' && s[i]<='z') s[i] = upper(s[i]);
    }

    int result = 0;

    for(int i=0; i<s.size(); i++) {
        if(s[i]>='A' && s[i]<='Z') result += s[i];
        else if(s[i]>='a' && s[i]<='z') result -= s[i];
    }

    if(result<0) result *= -1;

    int flag = 1;

    for(int i=2; i<result; ++i) {
        if(result%i==0) {
            flag = 0;
            break;
        }
    }

    cout << flag << "\n";

    return 0;

}