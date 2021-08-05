#include <bits/stdc++.h>

int main() {

    int a, b, i = 0;
    scanf("%d %d", &a, &b);
    while(true) {
        a *= 3;
        b *= 2;
        if(a>b) break;
        i++;
    }

    printf("%d\n", i+1);

    return 0;

}