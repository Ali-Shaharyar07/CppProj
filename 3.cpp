#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	bool isA = false, isB = false;
	if (c > d){
		int temp = c;
		c = d;
		d = temp;
	}
		if (a>=c && a<=d){
		isA = true;
	}
	if (b>=c && b<=d){
		isB = true;
	}	
	if (isA && isB || !isA && !isB){
		cout << "NO" << endl;
	} else{
		if(isA || isB)
		cout << "YES" << endl;
	else{
		cout << "YES" << endl;
	}
	}
	
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}