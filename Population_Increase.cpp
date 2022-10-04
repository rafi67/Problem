#include <bits/stdc++.h>

using namespace std;

int main() {

    int t,
    pa, pb; 
    double g1, g2;

    cin >> t;

    while(t--) {
        cin >> pa >> pb >> g1 >> g2;

        int y1 = 0;
    
        while(1) {
            if(pa>pb) break;
            pa += pa*(g1/100);
            pb+= pb*(g2/100);
            ++y1;
            if(y1>100) {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }
        if(y1<=100) cout << y1 << " anos.\n";
    }

    return 0;

}