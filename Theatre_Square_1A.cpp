#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m, a, ans; cin >> n >> m >> a;
	long long i = 0, j = 0;
	if (a == 1) {
		cout << n*m << endl;
		return;
	}
	while (n > 0) {
		n -= a;
		i++;
	}
	//cout << "i: " << i << endl;
	while (m > 0) {
		m -= a;
		j++;
	}
	//cout << "j: " <<  j << endl;
	ans = i*j;
	cout << ans << endl;


}

int main() {
		solve();
}