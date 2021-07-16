#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    int T, N, K, value;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &N, &K);
        deque<int>d;
        for(int j=0; j<N; j++) {
            scanf("%d", &value);
            d.push_back(value);
        }
        int j=0, largest, condition = N-(K-1), condition2;
        int m = j+1;
        largest = d.at(j);
        while(j<condition) {
            condition2 = (j+1)+(K-1);
            if(largest<d.at(m)) {
                largest = d.at(m);
                if(m<condition2) m++;
                
            }
            else if(largest>d.at(m) || largest==d.at(m)) if(m<condition2) m++;
            if(m == condition2) {
                j++;
                m = j+1;
                printf("%d ", largest);
                largest = d.at(j);
            }
        }
        printf("\n");
    }

    return 0;

}