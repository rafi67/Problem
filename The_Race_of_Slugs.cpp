#include <bits/stdc++.h>

using namespace std;

int Max(int* a, int n) {
    int m = a[0];
    for(int i=0; i<n; ++i)
        if(m<a[i])
            m = a[i];
    return m;
}

int main() {

    int l;
    
    while(1) {
        cin >> l;
        if(cin.eof())
            break;
        int v[l];

        for(int i=0; i<l; ++i)
            cin >> v[i];
        int m = Max(v, l);
        if(m<10)
            cout << 1 << "\n";
        else if(m>=10 && m<20)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }

    return 0;

}