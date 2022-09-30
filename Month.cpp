#include <bits/stdc++.h>

using namespace std;



int main() {

    int month;
    cin >> month;

    string Month[12] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

    cout << Month[month-1] << "\n";

    return 0;

}