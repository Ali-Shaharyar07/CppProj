#include <bits/stdc++.h>
using namespace std;
typedef string str;
int solve(int x) {
	str cmd; cin >> cmd;
	bool a = false;
	for (char e : cmd){
		if (e == '+'){
			a = true;
		}
		if (e == '-'){
			a = false;
		}
	}
	if (a) {
		return ++x;
	} else return --x;
}

int main() {
	int x = 0;
	int tc; cin >> tc;
	for(int i = 1; i <= tc; i++) {
		//cout << "TEST CASE# " << i << endl;
		x = solve(x);
	}
	cout << x << endl;
}