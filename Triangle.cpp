#include <bits/stdc++.h>

using namespace std;

int main() {

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float z1, z2, z3;
    z1 = a+b; z2 = a+c; z3 = b+c;

    if(z1>c && z2>b && z3>a) printf("Perimetro = %.1f\n", a+b+c);
    else printf("Area = %.1f\n", ((a+b)/2)*c);

    return 0;

}