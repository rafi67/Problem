#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    scanf("%d", &t);

    while(t--) {
        int temp;
        scanf("%d", &temp);
        if(temp==0) printf("NULL\n");
        else if(temp>0 && temp%2==0) printf("EVEN POSITIVE\n");
        else if(temp>0 && temp%2!=0) printf("ODD POSITIVE\n");
        else if(temp<0 && temp%2==0) printf("EVEN NEGATIVE\n");
        else printf("ODD NEGATIVE\n");
    }

    return 0;

}