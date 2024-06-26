#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b
char upper(char c){return c - 'a' + 'A';}
char lower(char c){return c + 'a' - 'A';}

void solve() {
	 int l, r; cin >> l >> r;
	 int x = r, s=0, p=2;
	 while(x!=1){
	 	if(p%2 == 0){
	 		p = 2;
	 	} else{
	 		p = 3;
	 		while(x%p != 0){
	 			p++;
	 		}
	 	}
	 	x = x/p;
	 	s++;

	 }
	 cout << s << endl;
			
	}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}