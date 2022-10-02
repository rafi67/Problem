#include <bits/stdc++.h>

using namespace std;

int main() {

    int t = 3;

    while(t--) {
        int M, N;
        cin >> M >> N;
        if(M>N) {
            int result = 0;
            while(N<=M) {
                result += N;
                cout << N << " ";
                ++N;
            }
            cout << "Sum=" << result << "\n";
        }
        else if(M<N) {
            int result = 0;
            while(M<=N) {
                result +=M;
                cout << M << " ";
                ++M;
            }
            cout << "Sum=" << result << "\n";
        }
    }

    return 0;

}