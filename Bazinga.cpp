#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    string s[5] = {"pedra", "papel", "tesoura", "lagarto", "Spock"},
    s1, s2, msg = "Caso #", msg2 = ": De novo!\n", msg3 = ": Bazinga!\n",
        msg4 = ": Raj trapaceou!\n";

    for(int i=1; i<=t; ++i) {
        cin >> s1 >> s2;
        if(s1==s2)
            cout << msg << i << msg2;
        else if(s1==s[1] && s2==s[0])
            cout << msg << i << msg3;
        else if(s1==s[0] && s2==s[1])
            cout << msg << i << msg4;
        else if(s1==s[3] && s2==s[2])
            cout << msg << i << msg4;
        else if(s1==s[2] && s2==s[3])
            cout << msg << i << msg3;
        else if(s1==s[1] && s2==s[2])
            cout << msg << i << msg4;
        else if(s1==s[2] && s2==s[1])
            cout << msg << i << msg3;
        else if(s1==s[0] && s2==s[3])
            cout << msg << i << msg3;
        else if(s1==s[3] && s2==s[0])
            cout << msg << i << msg4;
        else if(s1==s[4] && s2==s[3])
            cout << msg << i << msg4;
        else if(s1==s[3] && s2==s[4])
            cout << msg << i << msg3;
        else if(s1==s[4] && s2==s[2])
            cout << msg << i << msg3;
        else if(s1==s[2] && s2==s[4])
            cout << msg << i << msg4;
        else if(s1==s[3] && s2==s[1])
            cout << msg << i << msg3;
        else if(s1==s[1] && s2==s[3])
            cout << msg << i << msg4;
        else if(s1==s[1] && s2==s[4])
            cout << msg << i << msg3;
        else if(s1==s[4] && s2==s[1])
            cout << msg << i << msg4;
        else if(s1==s[0] && s2==s[4])
            cout << msg << i << msg4;
        else if(s1==s[4] && s2==s[0])
            cout << msg << i << msg3;
        else if(s1==s[0] && s2==s[2])
            cout << msg << i << msg3;
        else if(s1==s[2] && s2==s[0])
            cout << msg << i << msg4;
    }

    return 0;

}