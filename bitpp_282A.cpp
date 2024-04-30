#include <bits/stdc++.h>
using namespace std;

void solve() {
	string str; cin >> str;
	char counts[3]; 

	for (int i=0; i<=str.size()-1; i++) { 
		counts[i] = str[i];
		cout << counts[i] << endl;
	}

}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
	
}