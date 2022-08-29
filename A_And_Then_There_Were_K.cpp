#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    scanf("%d", &t);

    while(t--) {
        int n, last;
        scanf("%d", &n);
        
        for(int i=0; i<30; ++i) {
            if((n>>i)&1==1) last = i; 
        }
        printf("%d\n", (1<<last)-1);
    }

    return 0;

}