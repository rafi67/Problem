#include <bits/stdc++.h>

using namespace std;

int main() {

   int sd, ed, sh, eh, sm, em, ss, es;

   scanf("Dia %d\n", &sd);
   scanf("%d : %d : %d\n", &sh, &sm, &ss);
   scanf("Dia %d\n", &ed);
   scanf("%d : %d : %d\n", &eh, &em, &es);

    ed-=sd; eh-=sh; em-=sm; es-=ss;

    if(es<0) {
        --em;
        es+=60;
    }
    if(em<0) {
        --eh;
        em+=60;
    }
    if(eh<0) {
        --ed;
        eh+=24;
    }

    cout << ed << " dia(s)\n" << eh << " hora(s)\n" << em << " minuto(s)\n" <<
    es << " segundo(s)\n";
    
    return 0;

}