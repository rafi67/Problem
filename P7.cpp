#include <iostream>
#include <ostream>
#include <regex>
#include <sstream>

using namespace std;

class Complex {

    public:
        int a, b, c, d, result1, result2;
        Complex(int a = 0, int b = 0) {
            this->a = a;
            this->b = b;
        }

        Complex operator + (Complex &c) {
            c.result1 = a + c.a;
            c.result2 = b + c.b;
            return c;
        }

        friend ostream& operator << (ostream& output, const Complex &c) {
            output << c.result1 << "+i" << c.result2;
            return output;
        }

};

void process() {
    string s, s1;
    cin >> s >> s1;
    regex reg("((\\d+).\\w{1}(\\d+))");
    string a, b, c, d;
    int a1, b1, c1, d1;
    regex r;
    regex_replace(back_inserter(a), s.begin(), s.end(), reg, "$2");
    stringstream ss1(a);
    ss1 >> a1;
    regex_replace(back_inserter(b), s.begin(), s.end(), reg, "$3");
    stringstream ss2(b);
    ss2 >> b1;
    regex_replace(back_inserter(c), s1.begin(), s1.end(), reg, "$2");
    stringstream ss3(c);
    ss3 >> c1;
    regex_replace(back_inserter(d), s1.begin(), s1.end(), reg, "$3");
    stringstream ss4(d);
    ss4 >> d1;
    Complex ca(a1, b1);
    Complex cb(c1, d1);
    Complex c2 = ca + cb;
    cout << c2 << endl;
}

int main() {

    process();

    return 0;

}