#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    int sum = 0, i = 0;

    while(i<3) {
        getline(cin, s);
        if(s=="caw caw") {
            cout << sum << "\n";
            sum = 0; ++i;
        }
        else {
            for(int i=0; i<3; ++i)
                if(s[i]=='*') {
                    if(i==0)
                        sum += 4;
                    else if(i==1)
                        sum += 2;
                    else if(i==2)
                        sum += 1;
                }
        }
    }

    return 0;

}