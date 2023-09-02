#include <bits/stdc++.h>

using namespace std;

int search(int a[], int n, int item) {
    for(int i = 0; i<n; i++) if(item==a[i]) return i+1;
    return 0;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, counter = 1;

    while(true) {
        cin >> n >> q;

        if(n==0 && q==0) break;

        int a[n];

        for(int i=0; i<n; i++) cin >> a[i];

        sort(a, a+n);

        cout << "CASE# " << counter << ":\n";

        for(int i=0; i<q; i++) {
            int item;
            cin >> item;
            int position = search(a, n, item);
            if(position!=0)
                cout << item << " found at " << position << endl;
            else cout << item << " not found\n";
        }

        ++counter;
    }

    return 0;

}