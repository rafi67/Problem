#include <bits/stdc++.h>

using namespace std;

int main() {

    float s;
    cin >> s;
    cout << fixed << setprecision(2);

    if(s>=0.00 && s<=2000.00) cout << "Isento\n";

    else if(s>=2000.01 && s<=3000.00) {
        s-=2000.00;
        s*= ((float)8/100);
        cout << "R$ " << s << "\n";
    }

    else if(s>=3000.01 && s<=4500.00) {
        float temp = s-3000.00; 
        s-=2000.00;
        s-=temp;
        s*=((float)8/100);
        temp*=((float)18/100);
        s+=temp;
        cout << "R$ " << s << "\n";
    }

    else if(s>4500.00) {
        float temp = s-4500.00;
        float temp2 = s-2000.00;
        temp2-=1000.00;
        temp2-=temp;
        s -= 2000.00;
        s -= temp2;
        s -= temp;
        temp *= ((float)28/100);
        temp2 *= ((float)18/100);
        s *= ((float)8/100);
        s+= temp2+=temp;
        cout << "R$ " << s << "\n";
    }

    

    return 0;

}