#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(1) {
        cin >> n;
        if(cin.eof())
            break;
        if(n==0)
            cout << "vai ter copa!\n";
        else
            cout << "vai ter duas!\n";
    }

    return 0;

}