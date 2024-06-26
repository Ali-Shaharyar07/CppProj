#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b
char upper(char c){return c - 'a' + 'A';}
char lower(char c){return c + 'a' - 'A';}

void solve() {
	ll n, m, f, l, orgf, orgl, org0; cin >> n >> m;
	bool t = false;
	
	
	if (m == 0){
		cout << n << endl;
		return;
	}
	else{
		if(n == 0){
			while(m--){
				if (!t){
					n = n|1;
					t = true;
				}
				else{
					org0 = n|n+1|n+2;
					n = n|org0;
				}
		}
		}
		else{
			while(m--){
				if (!t){
					n = n-1|n|n+1;
					t = true;
				}
				else{
					orgf = n-2|n-1|n;
					orgl = n|n+1|n+2;
					n = orgl|n|orgf;
				}
		}
		}
	}
	cout << n << endl;
}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}