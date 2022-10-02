#include <bits/stdc++.h>

int main() {

    int N, in = 0, out = 0;
    scanf("%d", &N);
    int a[N];

    for(int i=0; i<N; ++i) scanf("%d", &a[i]);

    for(int i=0; i<N; ++i) {
        if(a[i]>=10 && a[i]<=20) ++in;
        else ++out;
    }

    printf("%d in\n%d out\n", in, out);

    return 0;

}