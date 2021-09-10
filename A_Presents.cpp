#include <bits/stdc++.h>

int main() {

    int n, b, a[100];
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &b);
        a[b] = i;
    }

    for(int i=1; i<=n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;

}