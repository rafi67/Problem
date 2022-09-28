#include <bits/stdc++.h>

using namespace std;

int main() {

    int n1 = 1, size = 0;
    float n[5];
    int m = 2+3+4+1;

    for(int i=0; i<4; ++i) scanf("%f", &n[i]);

    float m2 = (n[0]*2)+(n[1]*3)+(n[2]*4)+n[3];

    float result = m2/m;
    printf("Media: %.1f\n", result);
    if(result<5.0) printf("Aluno reprovado.\n");
    else if(result>=7.0) printf("Aluno aprovado.\n");
    else if(result>=5.0 && result<=6.9) {
        printf("Aluno em exame.\n");
        scanf("%f", &n[4]);
        printf("Nota do exame: %.1f\n", n[4]);
        if(n[4]>=5.0) printf("Aluno aprovado.\n");
        else if(n[4]<=4.9) printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (result+n[4])/2);
    }
    

    return 0;

}