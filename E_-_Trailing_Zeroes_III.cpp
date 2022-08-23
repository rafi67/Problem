#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll limit = 1e18;


ll func5(ll value) {
    ll result = 0, power = 5;
    while(power<=value) {
        result += value/power;
        power*=5;
    }
    return result;
}

ll binary(ll val) {
    ll b = 1, e = limit, pos = -1;
    while(b<=e) {
        ll mid = (b+e)/2;
        ll trailing = func5(mid);
        if(trailing==val) {
            pos = mid;
            e = mid-1;
        }
        else if(trailing>val) e = mid-1;
        else b = mid+1;
    }
    return pos;
}

int main() {

    int t, j = 1;
    scanf("%d", &t);

    while(t--) {
        ll n;
        scanf("%lld", &n);
        ll pos = binary(n);
        if(pos==-1) printf("Case %d: impossible\n", j++);
        else printf("Case %d: %lld\n", j++, pos);
    }

    return 0;

}
