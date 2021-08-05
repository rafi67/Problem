#include <bits/stdc++.h>

int main() {

    int x, result = 0, i = 0;
    scanf("%d", &x);

    while(true) {
        result += 5;
        if(result>=x) break;
        i++;
    }

    printf("%d\n", i+1);

    return 0;

}