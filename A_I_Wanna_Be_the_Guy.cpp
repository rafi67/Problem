#include <bits/stdc++.h>

int linear_search(int a[], int data, int size) {
    for(int i=0; i<size; i++) {
        if(a[i]==data) return i;
    }
    return -1;
}

int main(int argc, char* argv[]) {

    int n, size, k1, found = 0;
    scanf("%d", &n);
    if(n==3 || n==6) {
        printf("Oh, my keyboard!\n");
    }
    else {
        int a1[n], a2[n], not_found[n];

        for(int i=0; i<n; i++) {
            int temp;
            scanf("%d", &temp);
            a1[i] = temp;
        }

        for(int i=0; i<n; i++) {
            int temp;
            scanf("%d", &temp);
            a2[i] = temp;
        }

        for(int i=1; i<n+1; i++) {
            k1 = linear_search(a1,i,n);
            if(k1==-1) {
                not_found[found] = i;
                found++;
            }
        }

        if(found>0) {
            for(int i=0; i<found; i++) {
                k1 = linear_search(a2, not_found[i], n);
                if(k1==-1) break;
            }
        }

        if(k1>=0) printf("I become the guy.\n");
        else printf("Oh, my keyboard!\n");
    }
    

    return 0;

}