#include <bits/stdc++.h>

using namespace std;

int main() {

    float s, ns, me;
    string ip;
    cin >> s;

    if(s>=0.00 && s<=400.00) {
        ip = "15 %";
        me = s*((float)15/100);
        ns = s+me;
    }
    else if(s>=400.01 && s<=800.00) {
        ip = "12 %";
        me = s*((float)12/100);
        ns = s+me;
    }
    else if(s>=800.01 && s<=1200.00) {
        ip = "10 %";
        me = s*((float)10/100);
        ns = s+me;
    }
    else {
        if(s==2000.00) {
            ip = "7 %";
            me = s*((float)7/100);
            ns = s+me;
        }
        else {
            ip = "4 %";
            me = s*((float)4/100);
            ns = s+me;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << "\n"
    << "Reajuste ganho: " << me << "\n"
    << "Em percentual: " << ip << "\n";

    return 0;

}