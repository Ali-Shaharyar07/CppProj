#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;
#define LCM(a, b)        (a / __gcd(a, b)) * b
char upper(char c){return c - 'a' + 'A';}
char lower(char c){return c + 'a' - 'A';}

void solve() {
	ll n, l, ans=0, max = 0, min; cin >> n;
	bool t = false;;
	ll a[n], b[n+1];
	for(ll i = 0; i<=n-1; i++){
		cin >> a[i];
	}

	for(ll i = 0; i<=n; i++){
		cin >> b[i];
	}

	l = b[n];
	min = a[0];
	for(ll j = 0; j<=n-1; j++){
		if(a[j]>=max){max = a[j];}
		if(a[j]<=min){min = a[j];}
		while(a[j]>b[j]){
			if(a[j] == b[n]){
				if(!t){t = true;
				//cout << " mD ";
				ans += 1;}
			}
			//cout <<" dec ";
			a[j] -= 1;
			ans += 1;
			
		} 
			while(a[j]<b[j]){
				
				if(a[j] == b[n]){
				if(!t){t = true;
				//cout << " mD ";
				ans += 1;}
			}
				min = a[j];
				//cout <<" inc ";
			a[j] += 1;
			ans += 1;
			
		
		}
		if(a[j] == b[n]){

			if(!t){
				ans += 1;	

			}
			t = true;
			}


	}
	if(!t){
		ans += 1;
		while(max>b[n]){
			//cout << " max ";
			max -= 1;
			ans += 1;
		}
		while(max<b[n]){
			//cout << " min ";
			max += 1;
			ans += 1;
		}
	}
	cout << ans << endl;

}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
}