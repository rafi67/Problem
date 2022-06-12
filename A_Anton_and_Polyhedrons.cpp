#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, result = 0;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'T')
            result += 4;
        else if (s[0] == 'C')
            result += 6;
        else if (s[0] == 'O')
            result += 8;
        else if (s[0] == 'D')
            result += 12;
        else if (s[0] == 'I')
            result += 20;
    }

    cout << result << "\n";
}