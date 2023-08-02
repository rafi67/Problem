#include <bits/stdc++.h>

using namespace std;

int main() {

    int p, j1, j2, r, a, sum;

    cin >> p >> j1 >> j2 >> r >> a;

    sum = j1+j2;

    if(p==1 && sum%2==0 && r==0 && a==0) cout << "Jogador 1 ganha!\n";
    else if(p==1 && sum%2==0 && r==0 && a==1) cout << "Jogador 1 ganha!\n";
    else if(p==1 && sum%2==0 && r==1 && a==1) cout << "Jogador 2 ganha!\n";
    else if(p==1 && sum%2==0 && r==1 && a==0) cout << "Jogador 1 ganha!\n";
    else if(p==1 && sum%2!=0 && r==1 && a==1) cout << "Jogador 2 ganha!\n";
    else if(p==1 && sum%2!=0 && r==0 && a==0) cout << "Jogador 2 ganha!\n";
    else if(p==1 && sum%2!=0 && r==0 && a==1) cout << "Jogador 1 ganha!\n";
    else if(p==1 && sum%2!=0 && r==1 && a==0) cout << "Jogador 1 ganha!\n";
    else if(p==0 && sum%2!=0 && r==0 && a==0) cout << "Jogador 1 ganha!\n";
    else if(p==0 && sum%2!=0 && r==1 && a==1) cout << "Jogador 2 ganha!\n";
    else if(p==0 && sum%2!=0 && r==0 && a==1) cout << "Jogador 1 ganha!\n";
    else if(p==0 && sum%2!=0 && r==1 && a==0) cout << "Jogador 1 ganha!\n";
    else if(p==0 && sum%2==0 && r==1 && a==0) cout << "Jogador 1 ganha!\n";
    else if(p==0 && sum%2==0 && r==0 && a==1) cout << "Jogador 1 ganha!\n";
    else if(p==0 && sum%2==0 && r==0 && a==0) cout << "Jogador 2 ganha!\n";
    else if(p==0 && sum%2==0 && r==1 && a==1) cout << "Jogador 2 ganha!\n";

    return 0;

}