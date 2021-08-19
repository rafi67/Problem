#include <bits/stdc++.h>

int string_length(char n[]) {
    int i = 0, count = 0;
    while(n[i]!='\0') {
        i++;
        count++;
    }
    return count;
} 

void reverse_order(char* n) {
    int size = string_length(n), size2 = string_length(n)/2;
    int last_in = size-1;
    char temp;
    for(int i=0, j=last_in; i<size2; i++, j--) {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
} 

bool compare(char n1[], char n2[], int size) {
    bool c = true;
    for(int i=0; i<size; i++) {
        if(n1[i]!=n2[i]) {
            c = false;
            break;
        }
    }
    return c;
}

void task() {
    char s[100], t[100], temp;
    scanf("%s %s", s, t);
    int s_size = string_length(s), t_size = string_length(t);
    int last_in = s_size-1;
    if(t_size!=s_size) printf("NO\n");
    else {
        reverse_order(t);
        bool c = compare(s, t, s_size);
        if(c) printf("YES\n");
        else printf("NO\n");
    }
}

int main() {

    task();

    return 0;

}