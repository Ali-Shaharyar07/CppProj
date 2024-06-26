#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	int n, m; cin >> n >> m;
	
		for(int i=n; i>=0; i-=2){
		if(m == i){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
	return;

	
	
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}