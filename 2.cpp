#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	str s; cin >> s;
	int len = s.length();
	if (len == 1){
		cout << "NO" <<endl;
		return;
	} 
	char c = s[0];
	int count = 0;
	for (char e : s){
		if (c == e){count++;}
	}
	if (count == len){
		cout << "NO" << endl;
		return;
	}
	for (int i = len-2; i>=0; i--){
		if(s[len-1] != s[i]){
			char temp = s[len-1];
			s[len-1] = s[i];
			s[i] = s[len-1];
		}
	}
	cout << "YES" << endl;
	cout << s << endl;

}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}