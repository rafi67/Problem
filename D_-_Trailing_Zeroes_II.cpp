#include <bits/stdc++.h>

using namespace std;

int func2(int value) {
    int result = 0, pow = 2;
    while(pow<=value) {
        result += value/pow;
        pow*=2;
    }
    return result;
}

int func5(int value) {
    int result = 0, pow = 5;
    while(pow<=value) {
        result += value/pow;
        pow*=5;
    }
    return result;
}

int two(int val) {
    int cnt = 0;
    while(val%2==0) {
        val/=2;
        cnt++;
    }
    return cnt;
}

int five(int val) {
    int cnt = 0;
    while(val%5==0) {
        val/=5;
        cnt++;
    }
    return cnt;
}

void result() {
    int t, n, r, q, p, x, y, j=1;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d %d", &n, &r, &p, &q);
        x = func2(n)-func2(r)-func2(n-r)+two(p)*q;
        y = func5(n)-func5(r)-func5(n-r)+five(p)*q;
        int result = min(x, y);
        printf("Case %d: %d\n", j++, result);
    }
}

int main() {

    result();

    return 0;

}