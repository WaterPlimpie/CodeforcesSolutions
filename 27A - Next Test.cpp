#include <bits/stdc++.h>
using namespace std;

bool indices[3005];
int main() {
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        indices[temp] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!indices[i]) {
            cout << i;
            return 0;
        }
    }
    cout << n + 1;
}
