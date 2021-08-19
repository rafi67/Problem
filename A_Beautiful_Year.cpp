#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, b = 1;
    scanf("%d", &n);
    while(b) {
        ++n;
        string s = to_string(n);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3]
        && s[2]!=s[3]) b = 0;
    }

    printf("%d\n", n);

    return 0;

}