#include <bits/stdc++.h>

int main(int argc, char *argv[]) {

    int n, result = 0;
    double result2;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
    }

    for(int i=0; i<n; i++) {
        result += a[i];
    }

    result2 = (double) result/n;

    printf("%.12lf\n", result2);

    return 0;

}