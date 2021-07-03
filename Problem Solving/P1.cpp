#include <iostream>

using namespace std;

int main() {
    int n;
    int q;
    cin >> n >> q;
    
    int** outer = new int*[n];


    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        outer[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    for(int i=0; i<q; i++) {
        int inner_index;
        int outer_index;
        cin >> outer_index >> inner_index;
        cout << outer[outer_index][inner_index] << endl;
    }

    return 0;
}