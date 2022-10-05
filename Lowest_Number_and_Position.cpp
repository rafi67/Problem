#include <bits/stdc++.h>

using namespace std;

int Min(int* a, int size) {
    int m = a[0], j = 0;
    for(int i=0; i<size; ++i) 
        if(m>a[i]) {
            m = a[i];
            j = i;
        }
    return j;
}

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; ++i) 
        cin >> a[i];

    int pos = Min(a, n);

    cout << "Menor valor: " << a[pos] << "\n"
    << "Posicao: " << pos << "\n";

    return 0;

}