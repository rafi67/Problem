#include <bits/stdc++.h>
#define newLine "\n"

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, result;
    cin >> n >> k;

    int minute = 4*60;
    int minute2 = k;

    for(int i=0, j=1; i<n; i++, j++) {
        if(minute2<minute) {
            minute2 += 5*j;
            if(minute2<=minute) result = j;
        }
        else break;
    }

    cout << result << newLine;

    return 0;

}