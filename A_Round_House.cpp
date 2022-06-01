#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    
    int n, a, b, result;

    cin >> n >> a >> b;

    int index = a;
    if(n==1) index = 1;
    else if(b>0) {
        for(int i=0; i<b; i++) {
            index++;
            if(index>n) index = 1;
        }
    }

    else if(b<0) {
        for(int i=0; i<abs(b); i++) {
            index--;
            if(index==0) index = n;
            
        }
    }

    result = index;

    cout << result << "\n";

    return 0;
    
}