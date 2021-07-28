#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string data, data2;
    cin >> data;
    data2 = data[0];
    for_each(data2.begin(), data2.end(), [](char &c) {
        c = ::toupper(c);
    });
    data.replace(data.begin(), data.begin()+1, data2);
    cout << data << "\n";

    return 0;

}