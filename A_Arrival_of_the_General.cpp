#include <bits/stdc++.h>

int max_num(int*a , int n) {
    int m = a[0];
    for(int i=0; i<n; i++) {
        if(m<a[i]) {
            m = a[i];
        }
    }
    return m;
}

int max(int* a, int n) {
    int m = a[0], in = 0;
    for(int i=0; i<n; i++) {
        if(m<a[i]) {
            m = a[i];
            in = i;
        }
    }
    return in;
}

int min_num(int* a, int n) {
    int mi = a[0];
    for(int i=0; i<n; i++) {
        if(mi>a[i]) mi = a[i];
    }
    return mi;
}

int min(int* a, int n) {
    int m = a[0], in = 0;
    for(int i=0; i<n; i++) {
        if(m>=a[i]) {
            m = a[i];
            in = i;
        }
    }
    return in;
}

int main() {

    int n, min_in, max_in, result = 0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
    }
    int max1 = max_num(a, n);
    int min1 = min_num(a, n);

    int size = n-1;
    if(max1==a[0] && min1==a[size]) {
        printf("%d\n", 0);
        return 0;
    }
    
    max_in = max(a, n);

    

    while(max_in!=0) {
        int temp1;
        temp1 = a[max_in];
        a[max_in] = a[max_in-1];
        a[max_in-1] = temp1; 
        max_in--;
        result++;
    }

    min_in = min(a, n);

    while(min_in!=size) {
        min_in++;
        result++;
    }

    printf("%d\n", result);

    return 0;

}