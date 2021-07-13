#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int T;
    string s;
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> s;
        if(s.size() <= 10)
            cout << s << "\n";
        else
            cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
    }

    return 0; 

}