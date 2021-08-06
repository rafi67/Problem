#include <bits/stdc++.h>

void max_number(int* result, int size) {
    int temp;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(result[i]<result[j]) {
                temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
}

int main() {

    int n, a, b, result = 0;
    scanf("%d", &n);
    int result1[n];
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        result += b;
        result -= a;
        result1[i] = result;
    }
    
    max_number(result1, n);

    printf("%d\n", result1[0]);

    return 0;

}