#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    scanf("%d %d", &n, &m);
    char x, y;
    if (n > m) {
        x = 'B';
        y = 'G';
    } else {
        y = 'B';
        x = 'G';
    }
    int mn = min(n, m);
    for (int i = 0; i < mn; ++i) {
        cout << x << y;
    }
    for (int i = mn; i < n || i < m; ++i) {
        cout << x;
    }
}