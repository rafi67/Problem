#include <bits/stdc++.h>

int main() {

    int result = 0, a, b, j = 0, n;
    scanf("%d", &n);
    while(true) {
        if(j==n) break;
        if(result = 0) {
            scanf("%d %d", &a, &b);
        }
        if((a%b)==0) {
            printf("%d\n", result);
            result = 0;
            j++;
        }
        if((a%b)!=0) {
            result++;
        }
    }

}