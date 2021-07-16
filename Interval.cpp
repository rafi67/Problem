#include <bits/stdc++.h>

using namespace std;

int main() {

    float f;
    cin >> f;
    float value1 = 0.00f, value2 = 25.00f, value3 = 50.00f, value5 = 75.00f,
    value6 = 100.00f;
    if(f < value1 || f>value6) {
        cout << "Fora de intervalo" << "\n";
    }

    if(f>=value1 || f<=value2) cout << "Intervalo [0,25]" << "\n";
    else if(f>value2 || f<=value3) cout << "Intervalo (25,50]" << "\n";
    else if(f>value3 || f<=value5) cout << "Intervalo (50,75]" << "\n";
    else if(f>value5 || f<=value6) cout << "Intervalo (75,100]" << "\n";

    return 0;

}