#include <iostream>
#include <deque>

using namespace std;

int main() {

    int T;
    int N, K;
    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        deque<int>d;
        scanf("%d %d", &N, &K);
        for(int j=0; j<N; j++) {
            int l;
            scanf("%d", &l);
            d.push_back(l);
        }

        for(int j=0; j<(N-(K-1)); j++) {
            int largest = d.at(j);
            for(int m=j+1; m<((j+1)+(K-1)); m++) {
                if(largest<d.at(m)) {
                    largest = d.at(m);
                }
            }
            printf("%d ", largest);
        }
        printf("\n");
    }
    
    return 0;

}