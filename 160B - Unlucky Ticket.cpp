#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    sort(s.begin(), s.begin() + n);
    sort(s.begin() + n, s.end());
    //cout << s;
    bool x = 1, y = 1;
    for (int i = 0; i < n; ++i) {
        x &= s[i] < s[n + i];
        y &= s[i] > s[n + i];
    }
    if (x || y) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}