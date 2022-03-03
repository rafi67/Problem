#include <bits/stdc++.h>

using namespace std;

int main() {

	long int result = 1;
	int t, n;
	cin >> t;
	for(int i=0; i<t; i++) {
		cin >> n;
		int s;
		for(int j=0; j<n; j++) {
			cin >> s;
			result *= (long int) s;
		}
		result %= (long int) 10;
		if(result == 2 || result == 3 || result == 5) printf("YES\n");
	else printf("NO\n");
    result = (long int) 1;
	}
	
}