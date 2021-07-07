#include <iostream>
#include <deque>

void print_max(int a[], int N, int K) {
    std::deque<int>d;
    int largest;
    int condition = N-(K-1);
    for(int j=0; j<condition; j++) {
            largest = a[j];
            int condition2 = ((j+1)+(K-1));
            for(int m=j+1; m<condition2; m++) {
                if(largest<a[m]) {
                    largest = a[m];
                }
            }
            d.push_back(largest);
        }
        
        int size = d.size();
        for(int i=0; i<size; i++) {
            printf("%d ", d.at(i));
        }
        printf("\n");
}

int main(int argc, char *argv[]) {

    int T;
    int N, K;
    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        scanf("%d %d", &N, &K);
        int a[N];
        for(int j=0; j<N; j++) {
            int l;
            scanf("%d", &l);
            a[j] = l;
        }
        print_max(a, N, K);
    }
    
    return 0;

}