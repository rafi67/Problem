#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int minute = n/60;
    int hour = minute/60;
    int second = n%60;
    if(minute > hour) {
        int minute2 = minute%60;
        cout << hour << ":" << minute2 << ":" << second << "\n";
    }
    else 
        cout << "0:" << minute << ":" << second << "\n";

}