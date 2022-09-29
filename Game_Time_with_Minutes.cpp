#include <bits/stdc++.h>

using namespace std;

int main() {

    int sh, sm, eh, em;
    cin >> sh >> sm >> eh >> em;

    if(em<sm) {
        em+=60;
        em-=sm;
        --eh;
        if(sh>eh) {
            eh+=24;
            eh-=sh;
        }
        else {
            eh-=sh;
        }
    }
    else if(eh==sh && em==sm) {
        eh = 24;
        em-=sm;
    }
    else {
        em-=sm;
        if(sh>eh) {
            eh+=24;
            eh-=sh;
        }
        else {
            eh-=sh;
        }
    }
    

    cout << "O JOGO DUROU " << eh << " HORA(S) E " << em << " MINUTO(S)\n";
    
    return 0;

}