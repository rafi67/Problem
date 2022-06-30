#include <stdio.h>

void Sort(int size, int* a) {
    for(int i=0; i<size-1; i++) {
        for(int j=1; j<size; j++) {
            if(a[j]<a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {

    int a[3];
    int a2[3];

    for(int i=0; i<3; i++) {
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
    }

    for(int i=0; i<3; i++) {
        a2[i] = a[i];
    }

    int size = sizeof(a2)/sizeof(a2[0]);

    Sort(size, a2);

    for(int i=0; i<3; i++) {
        printf("%d\n", a2[i]);
    }
    
    printf("\n");

    for(int i=0; i<3; i++) {
        printf("%d\n", a[i]);
    }

    return 0;

}