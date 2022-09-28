#include <bits/stdc++.h>

using namespace std;

int main() {

    int st, en;
    int result = 0;
    cin >> st >> en;

    if(st>en) {
        en+=24;
        result = en - st;
        cout << "O JOGO DUROU " << result <<" HORA(S)\n";
    }
    else if(st==en) {
        cout << "O JOGO DUROU 24 HORA(S)\n";
    }
    else {
        result = en-st;
        cout << "O JOGO DUROU " << result << " HORA(S)\n";
    }

    return 0;

}