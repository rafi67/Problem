#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int digit = s.size(), index;

    index = (1<<digit)-2;

    for(int i=digit-1, count = 0; i>=0; --i, ++count) 
        if(s[i]=='7') index += (1<<count);

    cout << index+1 << "\n"; 

    return 0;

}