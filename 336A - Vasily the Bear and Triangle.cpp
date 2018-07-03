#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int len = abs(x) + abs(y);
    if (x >= 0 && y >= 0) {
        cout << 0 << " " << len << " " << len << " " << 0;
        return 0;
    }
    if (x >= 0 && y < 0) {
        cout << 0 << " " << -len << " " << len << " " << 0;
        return 0;
    }
    if (x < 0 && y >= 0) {
        cout << -len << " " << 0 << " " << 0 << " " << len;
        return 0;
    }
    if (x < 0 && y < 0) {
        cout << -len << " " << 0 << " " << 0 << " " << -len;
        return 0;
    }

}