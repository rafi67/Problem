#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d, s1, s2, s3, cnt = 0;

    cin >> a >> b >> c >> d;

    s1 = a+b; s2 = b+c; s3 = c+a;

    if(s1>c && s2>a && s3>b)
        cnt+=3;
    else {
        s1 = b+c; s2 = c+d; s3 = b+d;
        if(s1>d && s2>b && s3>c)
            cnt+=3;
        else {
            s1 = a+c; s2 = c+d; s3 = d+a;
            if(s1>d && s2>a && s3>c)
                cnt+=3;
            else {
                s1 = a+b; s2 = b+d; s3 = d+a;
                if(s1>d && s2>a && s3>b)
                    cnt+=3;
            }
        }
    }
    
    if(cnt<3)
        cout << "N\n";
    else
        cout << "S\n";

    return 0;

}