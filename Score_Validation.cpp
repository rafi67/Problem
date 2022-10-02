#include <bits/stdc++.h>

using namespace std;

int main() {

    float num, result = 0;
    int i = 0;

    cout << fixed << setprecision(2);

    while(1) {
        cin >> num;
        if(i==2) break;
        else if(num>=0 && num<=10) {
            result += num;
            ++i;
        }
        else cout << "nota invalida\n";
    }

    cout << "media = " << result/i << "\n"; 

    return 0;

}