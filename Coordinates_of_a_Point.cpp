#include <bits/stdc++.h>

using namespace std;

int main() {

    float x, y;

    cin >> x >> y;

    if(y==0.0) {
        if(x==0.0) cout << "Origem\n";
        else cout << "Eixo X\n";
    }
    else if(x==0.0) {
        if(y==0.0) cout << "Origem\n";
        else cout << "Eixo Y\n";
    }
    else if(x>0 && y>0) cout << "Q1\n";
    else if(x>0 && y<0) cout << "Q4\n";
    else if(x<0 && y>0) cout << "Q2\n";
    else if(x<0 && y<0) cout << "Q3\n";

    return 0;

}