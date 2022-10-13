#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, n1, n2;
    string name1, name2, c1, c2;

    cin >> t;

    while(t--) {
        cin >> name1 >> c1 >> name2 >> c2 >> n1 >> n2;
        int sum = n1+n2;
        if(sum%2==0) {
            if(c1=="PAR")
                cout << name1 << "\n";
            else
                cout << name2 << "\n";
        }
        else {
            if(c1=="IMPAR")
                cout << name1 << "\n";
            else
                cout << name2 << "\n";
        } 
    }

    return 0;

}