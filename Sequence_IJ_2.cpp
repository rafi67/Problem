#include <bits/stdc++.h>

int main() {

    int i = 1, j = 7;
    int t = 5;
    while(t--) {
        for(int k=0; k<3; ++k) printf("I=%d J=%d\n", i, j--);
        i+=2;
        j+=3;
    }

    return 0;

}