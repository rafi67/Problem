#include <iostream>

int main(int argc, char *argv[]) {

    int n, k, value, result = 0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        a[i] = value;
    }


    int j=0;
    while(j<k) {
        if(a[j]!=0) result++;
        j++;
    }


    j--;
    
    int m = j+1;
    if(result!=0) {
        while(m<n) {
            if(a[j]==a[m] && a[j]!=0) result++;
            m++;
        }
    }

    printf("%d\n", result);

    return 0;

}