#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    int n = 0, size;
    cin >> s;
    size = s.size();
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(s[i]==s[j]) {
                s[j] = '0';
            }
        }
    }

    for(int i=0; i<size; i++) {
        if(s[i]=='0') {
            continue;
        }
        else {
            n++;
        }
    }

    if((n%2)==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

    return 0;

}