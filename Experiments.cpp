#include <bits/stdc++.h>

int main() {

    int t;
    scanf("%d", &t);

    int coelhos = 0, ratos = 0, sapos = 0;

    while(t--) {
        char c; int n;
        scanf("%d %c", &n, &c);
        if(c=='C') coelhos+=n;
        else if(c=='R') ratos+=n;
        else sapos+=n;
    }

    int total = coelhos+ratos+sapos;

    float cp = ((float)coelhos/total)*100,
    rp = ((float)ratos/total)*100,
    sp = ((float)sapos/total)*100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", cp);
    printf("Percentual de ratos: %.2f %\n", rp);
    printf("Percentual de sapos: %.2f %\n", sp);

    return 0;

}