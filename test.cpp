#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b


void solve() {
	int l, b; cin >> l >> b; 
	cout << 1LL*l*b << endl;
} 


int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}