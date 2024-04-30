#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	int n; cin >> n;
	vector<int> vec(n+1);
	map<int, int> c;
	bool ch = false;
	for(int i=1; i<=n; i++) {
		cin >> vec[i];
		c[i] = vec[i];
	}
	for (auto &x:c){
		if(x.first == c[x.second]){
			cout << 2 <<endl;
			return;
		}
	}
	cout << 3 << endl;

}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}