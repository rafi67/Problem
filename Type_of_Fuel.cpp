#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, alcohol = 0, gasoline = 0, diesel = 0;

    while(1) {
        cin >> x;
        if(x>=1 && x<=4) {
            if(x==1) ++alcohol;
            else if(x==2) ++gasoline;
            else if(x==3) ++diesel;
            else break;
        }
        else continue;
    }

    cout << "MUITO OBRIGADO\n" <<
    "Alcool: " << alcohol << "\n"
    << "Gasolina: " << gasoline << "\n"
    << "Diesel: " << diesel << "\n";

    return 0;

}