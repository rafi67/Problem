#include <bits/stdc++.h>

using namespace std;

int main() {

    int ddd;
    cin >> ddd;

    map<int, string>data = {{61, "Brasilia"}, {71, "Salvador"}, 
    {11, "Sao Paulo"}, {21, "Rio de Janeiro"}, {32, "Juiz de Fora"},
    {19, "Campinas"}, {27, "Vitoria"}, {31, "Velo Horizonte"}};

    if(data.find(ddd)==data.end()) cout << "DDD nao cadastrado\n";
    else cout << data[ddd] << "\n";

    return 0;

}