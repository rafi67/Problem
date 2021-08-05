#include <bits/stdc++.h>

using namespace std;

int main() {

    string n1;
    int n2, k, size;
    cin >> n1 >> k;
    stringstream ss(n1);
    size = n1.size()-1;
    ss >> n2;

    for(int i=0; i<k; i++) {
        if(n1[size]!='0') n2--;
        else n2 /= 10;
        n1 = to_string(n2);
        size = n1.size()-1;
    }

    printf("%d\n", n2);

    return 0;

}