#include <iostream>
#include <string>
#include <future>

using namespace std;

template<class T>
class MyTemplate {

    T a;

    public:
        MyTemplate(T a) {
            this->a = a;
        }

        T add(T b) {
            return a+b;
        }

};

template<>
class MyTemplate<string>{

    string a, b;
    
    public:

        MyTemplate(string a) {
            this->a = a;
        }

        string add(string b) {
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
            MyTemplate<string>s(s1);
            cout << s.add(s2) << endl;
        }
        else if(type == "int") {
            int num1, num2;
            cin >> num1 >> num2;
            MyTemplate<int>t(num1);
            printf("%d\n", t.add(num2));
        }
        else {
            float f1, f2;
            cin >> f1 >> f2;
            MyTemplate<float>f(f1);
            cout << f.add(f2) << endl;
        }
    }
}

int main(int argc, char *argv[]) {

    async(launch::async, [] {
        Temp();
    });    
    
    return 0;

}