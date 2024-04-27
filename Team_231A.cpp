#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void solve() {
	int a,b,c; cin >> a >> b >> c;
	if ((a+b+c) >= 2){
		ans++;
	} 
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
	cout << ans << endl;
}