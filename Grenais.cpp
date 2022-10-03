#include <bits/stdc++.h>

using namespace std;

int main() {

    int inter, gremio, draw = 0, rep, win_inter = 0, win_gremio = 0,
    win_match = 0;

    while(1) {
        cin >> inter >> gremio >> rep;
        cout << "Novo grenal (1-sim 2-nao)\n";
        if(inter>gremio) ++win_inter;
        else if(gremio>inter) ++win_gremio;
        else if(inter==gremio) ++draw;
        if(rep!=1) break;
    }

    win_match = win_inter+win_gremio;

    cout << win_match << " grenais\n"
    << "Inter:" << win_inter << "\n"
    << "Gremio:" << win_gremio << "\n"
    << "Empates:" << draw << "\n";

    if(win_inter>win_gremio) cout << "Inter venceu mais\n";
    else if(win_gremio>win_inter) cout << "Gremio venceu mais\n";
    else cout << "Não houve vencedor\n";

    return 0;

}