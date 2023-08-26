#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {

    int n1, d1, n2, d2, numerator, numerator2, denominator, denominator2, Gcd;
    char op, ch1, ch2;

    int t;

    scanf("%d", &t);

    while(t--) {
        scanf("%d %c %d %c %d %c %d", &n1, &ch1, &d1, &op, &n2, &ch2, &d2);

        if(op=='+') {
            numerator = (n1*d2) + (n2*d1);
            denominator = d1*d2;
            Gcd = gcd(numerator, denominator);
            (Gcd<0) ? Gcd*=(-1) : Gcd = Gcd;
            numerator2 = numerator/Gcd;
            denominator2 = denominator/Gcd;
        }
        else if(op=='-') {
            numerator = (n1*d2) - (n2*d1);
            denominator = d1*d2;
            Gcd = gcd(numerator, denominator);
            (Gcd<0) ? Gcd*=(-1) : Gcd = Gcd;
            numerator2 = numerator/Gcd;
            denominator2 = denominator/Gcd;
        }
        else if(op=='*') {
            numerator = n1*n2;
            denominator = d1*d2;
            Gcd = gcd(numerator, denominator);
            (Gcd<0) ? Gcd*=(-1) : Gcd = Gcd;
            numerator2 = numerator/Gcd;
            denominator2 = denominator/Gcd;
        }
        else {
            numerator = n1*d2;
            denominator = n2*d1;
            Gcd = gcd(numerator, denominator);
            (Gcd<0) ? Gcd*=(-1) : Gcd = Gcd;
            numerator2 = numerator/Gcd;
            denominator2 = denominator/Gcd;
        }

        printf("%d/%d = %d/%d\n", numerator, denominator, numerator2, denominator2);
    }

    return 0;

}