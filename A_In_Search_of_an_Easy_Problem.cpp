#include <bits/stdc++.h>

int main() {

    int n;
    scanf("%d", &n);
    int num;
    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        if(num==1) break;
    }

    if(num==1) printf("HARD\n");
    else printf("EASY\n");
    
    return 0;

}