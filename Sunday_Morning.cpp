#include <bits/stdc++.h>

using namespace std;

int main() {

    string time;
    int h, m;

    while(scanf("%d:%d", &h, &m)!=EOF) {
        h = (h<7 || (h==7 && m==0))? 0:(((h+1)-8)*60)+m;
        printf("Atraso maximo: %d\n", h);
    }

    return 0;

}