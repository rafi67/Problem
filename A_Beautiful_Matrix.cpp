#include <bits/stdc++.h>

int main(int argc, char *argv[]) {

    int a[5][5];
    int index, index2, value, result = 0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &value);
            a[i][j] = value;
            if(value == 1) {
                index = i; 
                index2 = j;
            }
        }
    }

    while(true) {
        if(index<2) {
            index++; 
            result++;
        }
        else if(index>2) {
            index--; 
            result++;
        }
        if(index2<2) {
            index2++; 
            result++;
        }
        else if(index2>2) {
            index2--; 
            result++;
        }
        if(index==2 && index2==2) break;
    }

    printf("%d\n", result);

    return 0;

}