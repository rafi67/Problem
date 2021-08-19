#include <bits/stdc++.h>

int string_length(char* n) {
    int count = 0, i = 0;
    while(n[i]!='\0') {
        count++;
        i++;
    }
    return count;
} 

void task() {
    char n[100];
    scanf("%s", n);
    int size = string_length(n), count = 0;
    int last_index = size-1;
    for(int i=0; i<size; i++) {
        if(n[i]=='4' || n[i]=='7') count++;
    }
    if(count==4 || count==7) printf("YES\n");
    else printf("NO\n");
}

int main() {

    task();

    return 0;

}