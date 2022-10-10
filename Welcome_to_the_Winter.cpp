#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a>b && c>=b)
        cout << ":)\n";
    else if(a<b && c<=b)
        cout << ":(\n";
    else if(a<b && b<c && c-b<b-a)
        cout << ":(\n";
    else if(a<b && b<c && c-b>=b-a)
        cout << ":)\n";
    else if(a>b && b>c && b-c<a-b)
        cout << ":)\n";
    else if(a>b && b>c && b-c>=a-b)
        cout << ":(\n";
    else if(a==b && b<c)
        cout << ":)\n";
    else
        cout << ":(\n";

    return 0;

}