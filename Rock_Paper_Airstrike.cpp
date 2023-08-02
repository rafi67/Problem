#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    while(n--) {
        string player1;
        string player2;

        cin >> player1 >> player2;

        if(player1=="pedra" && player2=="pedra") cout << "Sem ganhador\n";
        else if(player1=="ataque" && player2=="papel") cout << "Jogador 1 venceu\n";
        else if(player1=="papel" && player2=="papel") cout << "Ambos venceram\n";
        else if(player1=="ataque" && player2=="ataque") cout << "Aniquilacao mutua\n";
        else if(player1=="ataque" && player2=="pedra") cout << "Jogador 1 venceu\n";
        else if(player1=="pedra" && player2=="ataque") cout << "Jogador 2 venceu\n";
        else if(player1=="pedra" && player2=="papel") cout << "Jogador 1 venceu\n";
        else if(player1=="papel" && player2=="ataque") cout <<  "Jogador 2 venceu\n";
        else if(player1=="papel" && player2=="pedra") cout << "Jogador 2 venceu\n";
    }

    

    return 0;

}