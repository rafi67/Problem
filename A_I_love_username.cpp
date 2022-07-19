#include <bits/stdc++.h>

using namespace std;

void result2();
bool max(int r, int* a);
bool min(int r, int* a);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    result2();    

    return 0;

}

void result2() {
    int n, result = 0;
    cin >> n;

    int a[n];

    for(int i=0; i<n; ++i) cin >> a[i];

    for(int i=1; i<n; ++i) if(max(i, a)) result++;

    for(int i=1; i<n; ++i) if(min(i, a)) result++;

    cout << result << "\n";
}

bool max(int r, int* a) {
    int i = r, j = (r>0)? r-1 : 0;
    bool result;
    while(j>=0) {
        if(a[i]>a[j] && a[i]!=a[j]) result = true;
        else {
            result = false;
            break;
        }
        --j;
    }
    return result;
}

bool min(int r, int* a) {
    int i = r, j = (r>0)? r-1 : 0;
    bool result;
    while(j>=0) {
        if(a[i]<a[j] && a[i]!=a[j]) result = true;
        else {
            result = false;
            break;
        }
        --j;
    }
    return result;
}