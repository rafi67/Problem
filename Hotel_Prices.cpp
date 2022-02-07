#include <bits/stdc++.h>


using namespace std;


int main() {
    int n, result = 0;
    int bedr1, bathr1;
    string type1;
    cin >> n;
   int bathr[n];
   int bedr[n];
   string type[n];
   for(int i=0; i<n; i++) {
       cin >> type1 >> bedr1 >> bathr1;
       type[i] = type1;
       bedr[i] = bedr1;
       bathr[i] = bathr1;
   }
   
   for(int i=0; i<n; i++) {
       if(type[i]=="standard") {
           int cal = (bedr[i] * 50) + (bathr[i] * 100);
           result += cal;
       }
       else {
           int cal = (bedr[i] * 50) + (bathr[i] * 100) + 100;
           result += cal;
       }
   }
   
   cout << result << endl;
      
    return 0;
}
