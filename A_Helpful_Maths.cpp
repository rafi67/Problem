#include <bits/stdc++.h>

using namespace std;

void sort(int *a, int size) {
    int temp;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(a[i]>a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
   }
}

void task() {
    string data, data2;
    cin >> data;
    int s = data.size();
    if(s==1) cout << data << "\n";
    else {
        regex reg("(.?(\\d+).?)");
        regex_replace(back_inserter(data2), data.begin(), data.end(), reg, "$2 ");
        int size = data2.size()/2;
        int a[size];
        stringstream ss(data2);
        for(int i=0; i<size; i++) {
            int num;
            ss >> num;
            a[i] = num;
        }
        sort(a, size);
        int s2 = size-1;
        for(int i=0; i<size; i++) {
            cout << a[i];
            if(i!=s2) cout << "+";
        }
        cout << "\n";
    }
}

int main(int argc, char *argv[]) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    task();

    return 0;

}