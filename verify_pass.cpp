#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b
char upper(char c){return c - 'a' + 'A';}
char lower(char c){return c + 'a' - 'A';}

void solve() {
	int j, n, max; cin >> j;
	str s; cin >> s;
	max = (int)s[0];
	for(int i = 0; i<=j-1; i++){
		char c = s[i];
		n = (int) c;
		if (n>=65 && n<=90){cout << "NO" << endl; return;}
		if(n >= max){
			max = n;
		}
		else {cout << "NO" << endl; return;}
	}
	cout << "Yes" << endl;
	return;
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}