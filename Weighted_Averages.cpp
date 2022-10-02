#include <bits/stdc++.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t--) {
        float a[3];
        scanf("%f %f %f", &a[0], &a[1], &a[2]);
        float result = ((a[0]*2)+(a[1]*3)+(a[2]*5))/(2+3+5);
        printf("%.1f\n", result);
    } 

    return 0;

}