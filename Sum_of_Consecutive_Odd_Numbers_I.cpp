#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, y;
    scanf("%d %d", &x ,&y);

    int result = 0;

    if(x>y) {
        ++y;
        result = (y%2!=0)? y:++y;
        ++y;
        while(y<x) {
            if(y%2!=0) result+=y;
            ++y;
        }
        printf("%d\n", result);
    }
    else if(y>x) {
        ++x;
        result = (x%2!=0)?x:++x;
        ++x;
        while(x<y) {
            if(x%2!=0) result+=x;
            ++x;
        }
        printf("%d\n", result);
    }
    else printf("0\n");

    return 0;

}