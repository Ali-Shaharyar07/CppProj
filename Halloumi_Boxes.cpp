#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b
char upper(char c){return c - 'a' + 'A';}
char lower(char c){return c + 'a' - 'A';}

void solve() {
	int n, k; cin >> n >> k;
	int a[n];
	for(int j = 0; j<=n-1; j++){
		cin >> a[j];
	}
	int ncompare = n-2;
	bool swap = false;
	while (!swap || ncompare != 0){
		for(int i = 0; i<=ncompare; i++){
		if(a[i] > a[i+1]){
			swap = true;
			if(k>1){
				cout << "YES" << endl;
				return;
			} else{
				cout << "NO" << endl;
				return;
				}
			}
		}
		ncompare--;
	}
	
	cout <<



}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}