#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    int n, n1, n2, n3, person = 0, result = 0, i=0;
    scanf("%d", &n);
    while(i<n) {
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1==1) person++;
        if(n2==1) person++;
        if(n3==1) person++;
        if(person>1) result++;
        person = 0;
        i++;
    }

    printf("%d\n", result);

    return 0;

}