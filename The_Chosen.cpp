#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m; 
    float note, comp = 0, m2;

    cin >> n;

    while(n--) {
        cin >> m >> note;
        if(note>=8 && note>comp) {
            comp = note;
            m2 = m;
        }
    }

    if(comp>=8) cout << m2 << "\n";
    else cout << "Minimum note not reached\n";

    return 0;

}