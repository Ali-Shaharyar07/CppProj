#include <bits/stdc++.h>
using namespace std;



void solve() {
	int total; cin >> total;
	int freq[101];
	for (int i=1; i<=100; i++) {
		freq[i] = 0;
	}
	int ans=0;
	int lens[total];
	for (int i=1; i<=total; i++) {
		cin >> lens[i];
		freq[lens[i]]++;
	}
	for (int i = 1; i<=100; i++) {
		ans += freq[i]/3;
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