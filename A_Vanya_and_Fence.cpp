#include <bits/stdc++.h>

int main() {

    int n, h, r_w = 0, a;
    scanf("%d %d", &n, &h);
    for(int i=0; i<n; i++) {
        scanf("%d", &a);
        if(a>h) r_w+=2;
        else r_w++;
    }

    printf("%d\n", r_w);

    return 0;

}