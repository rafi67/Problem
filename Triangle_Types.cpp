#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    double z1, z2, z3, z4, Z2, Z3;
    z1 = b+c; Z2 = a+c; Z3 = a+b;
    z2 = pow(b, 2)+pow(c, 2);
    z3 = pow(a, 2)+pow(c, 2);
    z4 = pow(a, 2)+pow(b, 2);
    double A = pow(a, 2), B = pow(b, 2), C = pow(c, 2);

    if(a>=z1 || b>=Z2 || c>=Z3) cout << "NAO FORMA TRIANGULO\n";
    else if(A==z2 || B==z3 || C==z4) cout << "TRIANGULO RETANGULO\n";
    else if(A>z2 || B>z3 || C>z4) cout << "TRIANGULO OBTUSANGULO\n";
    else if(A<z2 || B<z3 || C<z4) cout << "TRIANGULO ACUTANGULO\n";
    if(a==b && a==c) cout << "TRIANGULO EQUILATERO\n";
    else if(a==b || b==c || c==a) cout << "TRIANGULO ISOSCELES\n";


    return 0;

}