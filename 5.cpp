#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	int r; cin >> r;
	if (r == 1){cout << "8" << endl; return;}
	if (r == 2){cout << "16" << endl; return;}
	int f = r-2;
		cout << 4*(2*r-1) << endl;	
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}