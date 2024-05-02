#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b




void solve() {
	int r = 4, c = 4, mX = 2, mY = 2, nX, nY, ans=0; // 0-4 rows || 0-4 columns;
	bool found = false;
	for (int i = 0; i <= 4; i++){
		for (int j = 0; j<=4; j++){
			int n;
			cin >> n;
			if (n == 1) { 
				nX = i; 
				nY = j; 
				found = true;
				break;
			}
		}
		if (found) {break;}
	}
	ans += abs(nX-mX);
	ans += abs(nY-mY);
	cout << ans << endl;
}

int main() {
		solve();
}