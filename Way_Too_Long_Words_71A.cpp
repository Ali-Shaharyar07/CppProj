#include <bits/stdc++.h>
using namespace std;

void solve() {
	string word; cin >> word;
	int slen = word.size();
	if (slen > 10) {
		int inner_len = word.substr(1, slen-2).size();
		cout << word.substr(0, 1) << inner_len << word.substr(slen-1,1) << endl;
	} else {cout << word << endl;}
}

int main() {
	int tc; cin >> tc;
	for(int i = 0; i <= tc; i++) {
		solve();
	}
}