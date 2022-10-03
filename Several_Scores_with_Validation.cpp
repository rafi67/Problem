#include <bits/stdc++.h>

using namespace std;

int main() {

    float x, result = 0;
    int i = 0;

    string invalid = "nota invalida";
    string cal = "novo calculo (1-sim 2-nao)";

    cout << fixed << setprecision(2);

    while(1) {
        cin >> x;
        if(x>=0 && x<=10) {
            result += x;
            ++i;
        }
        else cout << invalid << "\n";
        if(i==2) {
            cout << "media = " << result/2 << "\n";
            result = 0; i = 0;
            break;
        }
    }

    while(1) {
        cin >> x;
        cout << cal << "\n";
        if(x==2) break;
        else if(x==1) {
            while(1) {
                cin >> x;
                if(x>=0 && x<=10) {
                    result += x;
                    ++i;
                }
                else cout << invalid << "\n";
                if(i==2) {
                    cout << "media = " << result/2 << "\n";
                    result = 0; i = 0;
                    break;
                }
            }
        }
    }

    return 0;

}