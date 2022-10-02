#include <bits/stdc++.h>

using namespace std;

int main() {

    int higest = 0, pos = 0;

    for(int i=1; i<=100; ++i) {
        int n;
        scanf("%d", &n);
        if(n>higest) {
            higest = n;
            pos = i;
        }
    }

    printf("%d\n%d\n", higest, pos);

    return 0;

}