#include <bits/stdc++.h>

int main(int argc, char *argv[]) {

    int a[5][5];
    int index, index2, value, result = 0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &value);
            a[i][j] = value;
            if(value == 1) index = i; index2 = j;
        }
    }

    

    return 0;

}