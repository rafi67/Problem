#include <bits/stdc++.h>

using namespace std;

template<class T>
class MyTemplate {

    T a, b;

    public:
        MyTemplate(T a, T b) {
            this->a = a;
            this->b = b;
        }

        T add() {
            return a+b;
        }

};

template<>
class MyTemplate<string>{

    string a, b;
    
    public:

        MyTemplate(string a, string b) {
            this->a = a;
            this->b = b;
        }

        string add() {
            return a+b;
        }

};

void Temp() {
    int T;
    cin >> T;
    string type;
    for(int i=0; i<T; i++) {
        cin >> type;
        if(type == "string") {
            string s1, s2;
            cin >> s1 >> s2;
            MyTemplate<string>s(s1, s2);
            cout << s.add() << "\n";
        }
        else if(type == "int") {
            int num1, num2;
            cin >> num1 >> num2;
            MyTemplate<int>t(num1, num2);
            cout << t.add() << "\n";
        }
        else {
            float f1, f2;
            cin >> f1 >> f2;
            MyTemplate<float>f(f1, f2);
            cout << f.add() << "\n";
        }
    }
}

int main(int argc, char *argv[]) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Temp();   
    
    return 0;

}