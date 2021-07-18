#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x = 0;
    string st;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> st;
        if(st=="++X") ++x;
        else if(st=="X++") x++;
        else if(st=="--X") --x;
        else x--;
    }
    
    cout << x << "\n";

    return 0;

}