#include <bits/stdc++.h>

using namespace std;

void bank_note_coin(double n) {
    int notes = n,
    coins = (n-notes) * 100;
    if((coins*1000)%10==9) coins++;
    int a[] = {100, 50, 20, 10 , 5, 2},
    a2[] = {1, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");

    for(int i=0; i<6; ++i) {
        int temp = notes/a[i];
        printf("%d nota(s) de R$ %d.00\n", temp, a[i]);
        notes%=a[i];
    }

    printf("MOEDAS:\n");
    int t = notes/a2[0];
    printf("%d moeda(s) de R$ %d.00\n", t, a2[0]);
    notes/=a2[0];

    for(int i=1; i<6; ++i) {
        int temp = coins/a2[i];
        printf("%d moeda(s) de R$ %.2lf\n", temp, (double) a2[i]/100);
        coins%=a2[i];
    }
}

int main() {

    double n;
    scanf("%lf", &n);

    bank_note_coin(n);

    return 0;

}