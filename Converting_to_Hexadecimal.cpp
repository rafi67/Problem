#include <bits/stdc++.h>

using namespace std;

int main() {

    int d;
    cin >> d;

    vector<int>vec;

    while(d!=0) {
        int v = d%16;
        vec.push_back(v);
        d/=16;
    }

    int size = vec.size();

    for(int i=size-1; i>=0; --i) {
        if(vec[i]>=10 && vec[i]<=15) {
            int temp = vec[i];
            temp -= 10;
            char c = 'A'+temp;
            cout << c;
        }
        else
            cout << vec[i];
    }

    cout << "\n";

    return 0;

}