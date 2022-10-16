#include <bits/stdc++.h>

using namespace std;

int main() {

    string first[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string second[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string third[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int n;

    cin >> n;

    string result = first[n/100]+second[(n%100)/10]+third[n%10];

    cout << result << "\n";

    return 0;

}