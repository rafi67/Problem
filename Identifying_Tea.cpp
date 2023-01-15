#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, a[5], cnt = 0;

    scanf("%d", &t);
    
    for(int i=0; i<5; ++i) scanf("%d", &a[i]);

    for(int i=0; i<5; ++i) 
        if(t==a[i]) ++cnt;

    printf("%d\n", cnt);

    return 0;

}