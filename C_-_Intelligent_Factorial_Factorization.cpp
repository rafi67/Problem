#include <bits/stdc++.h>
#define mx 1000000
#define ll long long

using namespace std;

bool cross[mx+5];
vector<int>prime;

void sieve() {
    for(int i=2; i<=mx; ++i) {
        if(cross[i]) continue;
        prime.push_back(i);
        for(ll j = (ll)i*i; j<=mx; j+=i) cross[j] = true;
    }
}

void fact_factorization() {
    sieve();
    int t, j=1;
    scanf("%d", &t);
    while(t--) {
        int n, cnt = 0, index = 0;
        scanf("%d", &n);
        printf("Case %d: %d = ", j++, n);
        for(int p:prime) {
            if(p>n) break;
            ++index;
            int cnt = 0;
            for(int i=2; i<=n; ++i) {
                int temp = i;
                if(temp%p==0) {
                    while(temp%p==0) {
                        ++cnt;
                        temp/=p;
                    }
                }
            }
            if(index>1) printf("* ");
            printf("%d (%d) ", p, cnt);
        }
        printf("\n");
    }
}

int main() {

    fact_factorization();

    return 0;

}