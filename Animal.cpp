#include <bits/stdc++.h>

using namespace std;

int main() {

    string data[3];

    for(int i=0; i<3; ++i) cin >> data[i];

    if(data[0]=="vertebrado") {
        if(data[1]=="ave") {
            if(data[2]=="carnivoro") cout << "aguia\n";
            else cout << "pomba\n";
        }
        else {
            if(data[2]=="onivoro") cout << "homem\n";
            else cout << "vaca\n";
        }
    }
    else {
        if(data[1]=="inseto") {
            if(data[2]=="hematofago") cout << "pulga\n";
            else cout << "lagarta\n";
        }
        else {
            if(data[2]=="hematofago") cout << "sanguessuga\n";
            else cout << "minhoca\n";
        }
    }


    return 0;

}