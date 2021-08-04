#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    int n = 0, size, tracker = 0;
    cin >> s;
    size = s.size();
    int a[size];
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(s[i]==s[j]) {
                a[tracker] = j;
                tracker++;
            }
        }
    }

    for(int i=0; i<size; i++) {
        
    }

    return 0;

}