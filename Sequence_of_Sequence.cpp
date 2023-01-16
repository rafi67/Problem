#include <bits/stdc++.h>

using namespace std;

int sequence(int n) {
    if(n==0) return 1;
    return n+sequence(n-1);
}


int main() {

    int n, Case = 1;

    while(scanf("%d", &n)!=EOF) {
        int temp = sequence(n);
        if(n==0) {
            printf("Caso %d: %d numero\n", Case, temp);
            printf("%d\n", 0);
        }
        else {
            int i = 0, cnt = 0;
            printf("Caso %d: %d numeros\n", Case, temp);
            for(int j=0; j<temp; ++j) {
                if(i==0) {
                    printf("%d ", i++);
                }
                else if(i==1) {
                    printf("%d", i++);
                }
                else if(i!=cnt){
                    printf(" %d", i);
                    ++cnt;
                }
                else {
                    cnt = 0;
                    ++i;
                    --j;
                }
            }
            printf("\n");
        }
        printf("\n");
        ++Case;
    }

    return 0;

}