#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, take = 0;
    string color;
    cin >> n >> color;
    int size = n-1;
    for(int i=0; i<size; i++) {
        if(color[i]==color[i+1]) take++;
    }
    printf("%d\n", take);

    return 0;

}