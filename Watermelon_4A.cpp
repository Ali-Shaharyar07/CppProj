#include <bits/stdc++.h>
using namespace std;

void solve() {
	int w; cin >> w;
	if (w%2 == 0 && w>2) {
		if ((w/2)%2 > 0) {
			if (((w-2)%2) == 0) {
				cout << "YES" << endl;
			} else { cout << "NO" << endl;}
		} else { cout << "YES" << endl;}
	} else { cout << "NO" << endl;}
}

int main(void) {
 	solve();
}
