#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b


void solve() {
	int n, sum1=0, lengthstr; cin >> n;
	string s, character; cin >> s;
	lengthstr = s.length(); // length of string

	for (int i=0; i<=lengthstr; i++){
		character = s.substr(i,1); // gets each character
		if (character == "U") { // if character is U
			sum1++; // to uska count le liya
		}
	}

	if (sum1%2 == 0) {
		cout << "NO" << endl; // if the count is even then she wont win
	} else{
		cout << "YES" << endl; // if it is odd then she will win
	}

} 


int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}