#include <bits/stdc++.h>
using namespace std;

void solve() {

		int n, val, k; cin >> n;
		long long min = 100000000000000000;
		bool a = true, b = false;
		vector<int> piles;

		for (int i=0; i<=n; i++) {
			cin >> val;
			piles.push_back(val);
		}
		k = piles.at(0);
		
		int sum = 1;
		while (k>0 && sum > 0) {
			 sum = 0;
			for(auto& element : piles) { // 
				element -= 1;
				sum += element;
			}

			if (a) {
				a=false;
				b=true;}
			else{

				 b=false;
				 a=true; 
			} 
			for(auto& element : piles) {
				if (element < min) { 
					min = element;
			}
			k = min;
			}
		}



		if(a){ cout << "Alice" << endl;}
		if(b){ cout << "Bob" << endl;}
		
	}

int main() {
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		solve();
	}
	
}