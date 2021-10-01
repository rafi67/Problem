#include <bits/stdc++.h>

using namespace std;

int get_group(string* a, int size) {
    int array[size], result = 0;
    bool value1 = false, value2 = false;
    for(int i=0; i<size; i++) {
        array[i] = 0;
    }

    for(int i=0, j=0; i<size; i++) {

        if(a[i]=="10") {
            if(value2==true) {
                ++j;
                value2 = false;
            }
            value1 = true;
            array[j] = 1;
        }
        else {
            if(value1==true) {
                ++j;
                value1 = false;
            }
            value2 = true;
            array[j] = 1;
        }
    }

    for(int i=0; i<size; i++) {
        if(array[i]!=0) result++;
    }

    return result;
}

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    string a[n];

    for(int i=0; i<n; i++) {
        string temp;
        cin >> temp;
        a[i] = temp;
    }

    int group = get_group(a, n);

    printf("%d\n", group);

    return 0;

}