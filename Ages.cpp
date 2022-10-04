#include <bits/stdc++.h>

using namespace std;

int main() {

    int age, i = 0;
    float average = 0;

    while(1) {
        cin >> age;
        if(age<0) break;
        else {
            ++i;
            average+=age;
        }
    }

    cout << fixed << setprecision(2);

    cout << average/i << "\n";
 
    return 0;

}