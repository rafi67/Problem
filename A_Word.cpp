#include <bits/stdc++.h>

void lower_case(char* ch, int size) {
    char temp;
    for(int i=0; i<size; i++) {
        if(ch[i]>=65 && ch[i]<=90) {
            temp = ch[i];
            ch[i] = 97+(temp-65);
        }
    }
}

void upper_case(char* ch, int size) {
    char temp;
    for(int i=0; i<size; i++) {
        if(ch[i]>=97 && ch[i]<=122) {
            temp = ch[i];
            ch[i] = 65+(temp-97);
        }
    }
}

int string_size(char ch[]) {

    int length = 0;

    for(int i=0; ch[i]!='\0'; i++) {
        length++;
    }

    return length;
} 

void lowerandupper_counter(char ch[], int*l, int*u, int size) {
    for(int i=0; i<size; i++) {
        if(ch[i]>=65 && ch[i]<=90) (*u)++;
        
        else if(ch[i]>=97 && ch[i]<=122) (*l)++;
    }
}

int main() {

    char ch[100];
    scanf("%s", ch);
    int size = string_size(ch), lowercase = 0, uppercase = 0;
    lowerandupper_counter(ch, &lowercase, &uppercase, size);
    if(lowercase>uppercase) lower_case(ch, size);
    else if(lowercase==uppercase) lower_case(ch, size);
    else upper_case(ch, size);
    printf("%s\n", ch);

    return 0;

}