#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int L[n];

    int two = 0, three = 0, four = 0, five = 0;

    for(int i=0; i<n; i++) {
        cin >> L[i];
        two = L[i]%2==0 ? two+1 : two;
        three = L[i]%3==0 ? three+1 : three;
        four = L[i]%4==0 ? four+1 : four;
        five = L[i]%5==0 ? five+1 : five;
    }

    cout << two << " Multiplo(s) de 2\n"
    << three << " Multiplo(s) de 3\n"
    << four << " Multiplo(s) de 4\n"
    << five << " Multiplo(s) de 5\n";



    return 0;

}