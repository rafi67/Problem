#include <iostream>

using namespace std;

class Box {

    private:
        long l, b, h;
    
    public:

        Box() {
            l = 0;
            b = 0;
            h = 0;
        }

        Box(int l, int b, int h) {
            this->l = l;
            this->b = b;
            this->h = h;
        }

        Box(Box &b) {
            this->l = b.l;
            this->b = b.b;
            this->h = b.h;
        }

        int getLenth() {
            return l;
        }
        int getBreadth() {
            return b;
        }
        int getHeight() {
            return h;
        }

        long long calculateVolume() {
            return (long long) l*b*h;
        }

        friend bool operator < (Box &A, Box &B) {
            if((A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.b == B.b)
            && (A.l == B.l))) return true;

            else return false;
        }

        friend ostream& operator << (ostream& output, const Box &B) {
            output << B.l << " " << B.b << " " << B.h;
            return output;
        }

};

void check() {
    short n;
    cin >> n;
    Box temp;
    for(short i=0; i<n; i++) {
        short type;
        cin >> type;
        if(type == 1) {
            cout << temp << endl;
        }
        if(type == 2) {
            int l,b,h;
            cin >> l >> b >> h;
            Box newBox(l, b, h);
            temp = newBox;
            cout << temp << endl;
        }
        if(type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box newBox(l, b, h);
            
            if(newBox < temp) {
                cout << "Lesser" << endl;
            }
            else cout << "Greater" << endl;
        }
        if(type == 4) cout << temp.calculateVolume() << endl;
        if(type == 5) {
            Box newBox(temp);
            cout << newBox << endl;
        }
    }
}

int main() {

    check();

    return 0;

}