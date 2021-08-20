#include <bits/stdc++.h>

int main() {

    int n, p, q, room = 0, sub;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &p, &q);
        sub = q-p;
        if(sub>=2) room++;
    }
    printf("%d\n", room);

    return 0;

}