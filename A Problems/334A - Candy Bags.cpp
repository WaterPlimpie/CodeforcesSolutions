#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1, y = n * n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (n >> 1); ++j) {
            cout << x++ << " " << y-- << " ";
        }
        cout << "\n";
    }
}