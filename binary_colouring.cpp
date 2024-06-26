#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b




void solve() {
	ll x; cin >> x;
	ll t = x, c = 0, j, k, n, ans;
	bool sz = false;
	while(!sz){
		t -= pow(2, c);
		if (t <= 0){
			sz = true;
		} else {c++; t=x;}
	}
	n=c+1;

	ll a[n], p[n];

	for (int i=0; i<=n-1; i++){
		p[i] = pow(2, i);
		a[i] = 0;
	}


	if(x == pow(2, c)){
		a[n-1] = 1;
		cout << n << endl;
		print_array(a, n);
		return;
	}

	if (x%2 == 1){
		a[0] = -1;
	}
	
	a[n-1] = 1;
	ans = a[n-1]*p[n-1];
	j = n-1;
	while(ans != x){
		j--;
		k = a[j]*p[j];
		if((ans - k)<x){return;}
		a[j] = -1;
		ans -= k;
	} 
	print_array(a, n)



}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		cout << "TEST CASE# " << i << endl;
		solve();
	}
}