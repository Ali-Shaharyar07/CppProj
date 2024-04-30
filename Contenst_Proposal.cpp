#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x)            (int) (x).size()
#define LCM(a, b)        (a / __gcd(a, b)) * b


void insertAtBeginning( ll a[], int n, ll e ){
	for(int i=n-2;i>=0;i--)
	{
	    a[i+1] = a[i]; 
	}
	a[0] = e;
}

void solve() {
	int n, k=0; cin >> n;
	ll a[n], b[n];
	//cout << "n " << n << endl;
	for (int i=0; i<=n-1; i++){
		cin >> a[i];
		//cout << "a org  " << a[i] << endl;
	}
	for (int i=0; i<=n-1; i++){
		cin >> b[i];
		//cout << "b org  " << b[i] << endl;
	}


	if (n == 1 && a[0] <= b[0]){ cout << "0" << endl; return;}
	if (n == 1 && a[0] > b[0]){ cout << "1" << endl; return;}
	bool p=false;
	while (!p){
		for (int i=0; i<=n-1; i++){
		if (a[i] <= b[i]) {
			//cout << "t" << endl;
			p=true;
			continue;
		} else {
			//cout << "f" << endl;
			insertAtBeginning(a, n, 0);
			k++;
			p=false;
		}
	}
	}
	cout << k << endl;

}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}