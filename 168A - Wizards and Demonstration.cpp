#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int percent = x * 100 / n;
    int ans = 0;
    while (percent < y) {
        ++ans;
        ++x;
        percent = x * 100 / n;
    }
    cout << ans;
}
