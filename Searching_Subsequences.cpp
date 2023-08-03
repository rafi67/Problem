#include <bits/stdc++.h>

using namespace std;

void subSequence(string n1, string n2, int* cnt, int* pos) {
    int index = 0, size = n1.size(), characterCnt = 0;
    for(int i=0; i<n2.size(); i++) {
        if(n2[i]==n1[index]) {
            if(index==0) (*pos) = i+1;
            ++index;
            ++characterCnt;
            if(characterCnt==size) {
                characterCnt = 0; 
                ++(*cnt);
                index = 0;
            }
        }
        else if(n2[i]!=n1[index] && index>0 && index<size) {
            index = 0;
            characterCnt = 0;
            (*pos) = 0;
            if(n2[i]==n1[index]) {
                (*pos) = i+1;
                ++index;
                ++characterCnt;
            }
        }
    }
}

void print(int cnt, int pos, int in) {
    if(cnt!=0) {
             cout << "Caso #" << in << ":\n"
            << "Qtd.Subsequencias: " << cnt << "\n"
            << "Pos: " << pos << "\n\n";
        }
        else {
             cout << "Caso #" << in << ":\n"
            << "Nao existe subsequencia\n\n";
        }
}

int main() {

    string n1, n2;
    int cnt, pos, in = 1;

    while(1) {
        cnt = 0; pos = 0;
        cin >> n1 >> n2;
        if(cin.get()==EOF) break;
        
        subSequence(n1, n2, &cnt, &pos);
        print(cnt, pos, in);
        in++;
    }
    

    return 0;

}