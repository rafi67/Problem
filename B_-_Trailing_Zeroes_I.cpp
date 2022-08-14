#include <bits/stdc++.h>
#define mx 1000105
#define ll long long

using namespace std;

bool cross[mx+5];
vector<int>prime;

void sieve() {
    for(int i=2; i<=mx; ++i) {
        if(cross[i]) continue;
        prime.push_back(i);
        for(ll j = (ll)i*i; j<=mx; j+=i) cross[i] = true;
    }
}

int main() {

    sieve();
    int t, j=1;
    scanf("%d", &t);
    while(t--) {
        ll n;
        scanf("%lld", &n);
        int total_divisor = 1;
        for(int p:prime) {
            if(n<(ll)p*p) break;
            if(n%p==0) {
                int count = 0;
                while(n%p==0) {
                    n/=p;
                    count++;
                }
                total_divisor *= (count+1);
            }
        }
        if(n>1) total_divisor*=2;
        printf("Case %d: %d\n", j++, total_divisor-1);
    }
    
    return 0;
    
}