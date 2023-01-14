#include <bits/stdc++.h>
#define max 1000000 // 10^6

using namespace std;

long long int sheep[max], star[max];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int sum = 0, trek_sum = 0;
    int n, i;
    cin >> n;

    for(i=0; i<n; ++i)  {
        cin >> sheep[i];
        star[i] = 0;
    }

    i = 0;

    while(i<n) {
        if(i==0 && sheep[i]%2==0) {
            star[i] = 1;
            if(sheep[i]>0) sheep[i]--;
            break;
        }
        else if(i==n-1 && sheep[i]%2==1) {
            star[i] = 1;
            if(sheep[i]>0) sheep[i]--;
            break;
        }
        if(sheep[i]%2==1) {
            if(sheep[i]>0)sheep[i]--;
            star[i] = 1;
            ++i;
        }
        else if(sheep[i]%2==0) {
            if(sheep[i]>0) sheep[i]--;
            star[i] = 1;
            --i;
        }
    }

    for(int j=0; j<n; ++j) {
        sum += sheep[j];
        trek_sum += star[j];
    }

    cout << trek_sum << " " << sum << "\n";

    return 0;

}