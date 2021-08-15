#include <bits/stdc++.h>
 
int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    char ch[n];
    scanf("%s", ch);

    for(int i=0; i<t; i++) {
        for(int j=0; j<n; j++) {
            if(ch[j]=='B' && ch[j+1]=='G') {
                ch[j] = 'G';
                ch[j+1] = 'B';
                j++;
            }
        }
    }

    printf("%s\n", ch);
 
    return 0;
 
}