#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    while(1) {
        cin >> a;
        if(a==0)
            break;
        cin >> b >> c;
        float result =  (float) (a*b*100)/c;
        int result2 = result, i = 1;

        for(i; i*i<=result2; ++i);
        --i;
        cout << i << "\n";
    }

    return 0;

}