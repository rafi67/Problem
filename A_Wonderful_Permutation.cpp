#include <bits/stdc++.h>

using namespace std;

int min(int value, int a[], int begin, int end) {
    int minimum = value, pos = -1;
    for(int i=begin; i<end; ++i) {
        if(minimum>a[i] && a[i]!=-1) {
            minimum = a[i];
            pos = i;
        }
    }
    return pos;
}

void w_p() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k, cnt = 0;
        scanf("%d %d", &n, &k);
        int a[n];
        for(int i=0; i<n; ++i) scanf("%d", &a[i]);
        if(k==n) printf("0\n");
        else {
            for(int i=0; i<k; ++i) {
                int m = min(a[i], a, k, n);
                if(m!=-1 && a[m]<=k) {
                    a[i] = a[m];
                    a[m] = -1;
                    ++cnt;
                }
            }
            printf("%d\n", cnt);
        }
    }
}

int main() {

    w_p();

    return 0;

}