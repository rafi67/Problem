#include <bits/stdc++.h>

using namespace std;

int main() {

    int p, n;

    cin >> p >> n;

    int a[n];

    for(int i=0; i<n; ++i)
        cin >> a[i];
    
    string result = "YOU WIN";

    for(int i=0; i<n-1; ++i) 
        if(abs(a[i]-a[i+1])>p)
            result = "GAME OVER";
    cout << result << "\n";

    return 0;

}