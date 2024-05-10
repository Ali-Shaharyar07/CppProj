#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b

void solve() {
	str s; cin >>s;
	int l = s.length(), ans = 1;
	if (l == 1){ cout << "1" << endl; return;}
	int freq[2];
	for(char e : s){
		if (e == '0'){freq[0]++;} else{freq[1]++;}
	}
	if (freq[0] == 0 || freq[1] == 0){
		cout << '1' << endl;
		return;
	}
	str g[l];
	int c = 0;
	char t = s[0];
	for(int i=0; i<= l-1; i++){
		if(t!=s[i]){
			g[c] = s.substr(0, i);
			s = s.substr(i, l-i);
			cout << "g " << g[c] << "s " <<s << endl;
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