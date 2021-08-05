#include <bits/stdc++.h>

int main() {

    int k, n, w, total = 0, ammount, times;
    scanf("%d %d %d", &k, &n, &w);
    times = w+1;
    for(int i=1; i<times; i++) {
        total += i*k;
    }
    if(total>n) {
        ammount = total-n;
        printf("%d\n", ammount);
    }
    else {
        printf("0\n");
    }

    return 0;

}