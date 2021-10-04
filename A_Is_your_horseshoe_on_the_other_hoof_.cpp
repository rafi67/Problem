#include <bits/stdc++.h>

int main() {

    int a[4], num = 0;
    for(int i=0; i<4; i++) {
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
    }

    for(int i=0; i<3; i++) {
        if(num>1 && num<4) break; 
        for(int j=i+1; j<4; j++) {
            if(a[i]==a[j]) num++;
        }
    }

    printf("%d\n", num);

    return 0;

}