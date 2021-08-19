#include <bits/stdc++.h>

int main() {

    int n, A = 0, D = 0, size;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for(int i=0; i<n; i++) {
        if(s[i]=='A') A++;
        else D++;
    }

    if(A>D) printf("Anton\n");
    else if(A<D) printf("Danik\n");
    else printf("Friendship\n");

}