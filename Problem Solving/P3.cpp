#include <iostream>
#include <iomanip>

using namespace std;

void pp() {
    int T;
    string Text;
    cin >> T;
    double A, B, C;
    int i = 0;
    for(int i=0; i<T; i++) {
        if(i==0) cin.ignore(1024, '\n');
        getline(cin, Text);
        stringstream ss(Text);
        ss >> A >> B >> C;
        cout << hex << left << showbase << nouppercase;
        cout << (long long) A << endl;
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed <<
        setprecision(2);
        cout << B << endl;
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;
    }
}

int main() {

    pp();

    return 0;

}