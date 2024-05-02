#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	int x; cin >> x;
	int l[x]; //  1 - x      1<= y < x      1<= y <= x-1
	for (int i = 1; i<x; i++){
		int g;
		g = __gcd(x, i);
		l[i] = g+i;
	}
	int m = 0;
	int pos;
	for (int i = 1; i<x; i++){
		if (l[i] > m){
			m = l[i];
			pos = i;
		}
	}
	cout << pos << endl;

}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}