#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b




void solve() {
	int n, m, c=0, temp, index, ans = 0; cin >> n >> m;
	string a, b, str; cin >> a >> b;
	if (a == b) { cout << n << endl; return;}
	for (int i = 0; i < m; i++){
		temp = a[c];
		if (temp == b[i]){
			ans++;
			c++;
			continue;
		}
	}
	cout << ans << endl;
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}