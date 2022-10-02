#include <bits/stdc++.h>

int main() {

    int i = 1, j = 7, t = 5, n = 2;

    while(t--) {
        for(int k=0; k<3; ++k) printf("I=%d J=%d\n", i, j--);
        i+=2;
        j = 7;
        j+=n;
        n+=2;
    }

    return 0;

}