#include <bits/stdc++.h>

using namespace std;

int main() {

    map<int, float>m = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}
    };

    int p, number, quantity;
    
    float total = 0;

    scanf("%d", &p);

    while(p--) {
        scanf("%d %d", &number, &quantity);
        total += quantity*m[number];
    }

    printf("%.2lf\n", total);

    return 0;

}