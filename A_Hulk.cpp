#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1[2] = {"I hate ", "I love "};
    string s2[2] = {"that ", "it "};
    int n, j=0, last;
    cin >> n;
    last = n-1;
    for(int i=0; i<n; i++) {
        cout << s1[j];
        if(j==0) j++;
        else j--;
        if(i==last) cout << s2[1];
        else cout << s2[0]; 
    }

    return 0;

}