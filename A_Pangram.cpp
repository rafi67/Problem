#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);

    int n;
    string s;

    cin >> n >> s;

    string s2 = "abcdefghijklmnopqrstuvwxyz";
    string s3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int result = 0;

    for(int i=0; i<s.size(); i++) {
        for(int j=0; j<26; j++) {
            if(s[i]==s2[j]) {
                result++;
                char c = 'A'+(s2[j]-'a');
                for(int k=0; k<26; k++) {
                    if(c==s3[k]) s3[k] = '0';
                }
                s2[j] = '0';
            }
            else if(s[i]==s3[j]) {
                result++;
                char c2 = 'a'+(s3[j]-'A');
                for(int k=0; k<26; k++) {
                    if(c2==s2[k]) s2[k] = '0';
                }
                s3[j] = '0';
            }
        }
    }

    if(result==26) cout << "YES\n";
    else cout << "NO\n";

    return 0;

}