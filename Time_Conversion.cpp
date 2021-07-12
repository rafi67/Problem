#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int result1 = n/60;
    int result0 = result1/60;
    int result2 = n%60;
    if(result1 > result0){
        int result3 = result1%60;
        cout << result0 << ":" << result3 << ":" << result2 << "\n";
    }
    else 
        cout << "0:" << result1 << ":" << result2 << "\n";

}