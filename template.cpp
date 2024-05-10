#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	int x, y; cin >> x >> y;
	if (x > y){
		cout << y << " " << x << endl;
	}
	else {if (y >x){
		cout << x << " " << y << endl;
	} else{
		cout << y << " " << x << endl;
	}}
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}