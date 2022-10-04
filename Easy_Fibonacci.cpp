#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a = 0 , b = 1, temp;
    cin >> n;



    for(int i=0; i<n; ++i) {
        if(i==0) cout << a << " ";
        else if(i==1) cout << b << " ";
        else if(i>1 && i!=n-1) {
            temp = b;
            b = a+b;
            a = temp;
            cout << b << " ";
        }  
        else {
            temp = b;
            b = a+b;
            a = temp;
            cout << b << "\n";
        }
    }

    return 0;

}