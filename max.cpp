#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b
char upper(char c){return c - 'a' + 'A';}
char lower(char c){return c + 'a' - 'A';}

void solve() {
	int n; cin >> n;
	int a[n], m[n];
	for(int i = 0; i<=n-1; i++){
		cin >> a[i];
		m[i] = 0;
	}
	int c = 0;
	if(n==1){cout <<  a[0]-1 << endl; return;}
	//if(n==2){cout << max(a[0], a[1])-1 << endl; return;}
	for(int i=0;i<=n-2;i++){
		if (a[i]>m){
			m[c] = a[i];
			c++;
		}
	}
	sort(m[0], m[n]);

	cout << m[n]-1 << endl;
	}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}