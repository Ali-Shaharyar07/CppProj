#include <iostream>
using namespace std;

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << n << " ";
            } else if (j == i) {
                cout << n-i+1 << " ";
            } else if (j == n-i+2) {
                cout << i << " ";
            } else if (j == i-1) {
                cout << n-i+2 << " ";
            } else if (j == n-i+1) {
                cout << i+1 << " ";
            } else if (j == i+1) {
                cout << n-i+1 << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    print_pattern(7);
    return 0;
}