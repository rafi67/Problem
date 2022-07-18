#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    
    cin >> x;
    
    int result = 0, keeper;
    
    keeper = x/100;
    result += keeper;
    x %= 100;
    
    keeper = x/20;
    result += keeper;
    x %= 20;
    
    keeper = x/10;
    result += keeper;
    x %= 10;
    
    keeper = x/5;
    result += keeper;
    x %= 5;
    
    keeper = x/1;
    result += keeper;
    
    cout << result << "\n";
    
    return 0;
    
}