#include <bits/stdc++.h>
#define ll long long
#define mx 1000000 // 10^6

using namespace std;

bool cross[mx+5];
vector<ll>prime;
int id = 1;

void sieve() {
    for(int i=2; i<=mx; ++i) {
        if(cross[i]) continue;
        prime.push_back(i);
        for(ll j = (ll)i*i; j<=mx; j+=i) cross[j] = true;
    }
}

int main() {

    sieve();

    int t, cnt = 0, j = 1;
    ll n;
    scanf("%d", &t);

    while(t--) {
        int total_divisor = 1;
        scanf("%lld", &n);
        for(ll p:prime) {
            if(n<p*p) break;
            if(n%p==0) {
                cnt = 0;
                while(n%p==0) {
                    ++cnt;
                    n/=p;
                    if(n==0 || n==1) break;
                }
                total_divisor *= cnt+1;
            }
        }
        if(n>1) total_divisor *= 2;
        printf("Case %d: %d\n", j++, total_divisor-1);
    }

    return 0;

}