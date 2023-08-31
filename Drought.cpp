#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt = 1, n;
    
    while(true) {
        cin >> n;
        if(n==0) break;

        if(cnt!=1) cout << endl << endl;

        int totalResidence = 0, totalConsumption = 0, consumption, a, b;
        map<int, int> mp;
        while(n--) {
            int a, b;
            cin >> a >> b;
            totalResidence += a;
            totalConsumption += b;
            int temp = b/a;
            if(mp.find(temp)==mp.end()) mp[temp] = a;
            else mp[temp] = mp[temp] + a;
        }

        cout << "Cidade# " << cnt << ":" << endl;

        map<int,int>::iterator itr;
        for(itr=mp.begin(); itr!=mp.end(); itr++) cout << itr->second << "-" << itr->first << " ";
        cout << endl;

        float c = (float) totalConsumption/totalResidence;

        c = trunc(c*100)/100;

        cout << fixed << setprecision(2) << "Consumo medio: " << c << " m3.";
        cnt++;
    }


    return 0;

}