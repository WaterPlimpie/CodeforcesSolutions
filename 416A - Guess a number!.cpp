#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string op;
    int num;
    char ans;
    int left = -2e9;
    int right = 2e9;
    for (int i = 0; i < n; ++i) {
        cin >> op >> num >> ans;
        if (op == ">") {
            if (ans == 'Y') {
                left = max(left, num + 1);
            } else {
                right = min(right, num);
            }
        } else if (op == ">=") {
            if (ans == 'Y') {
                left = max(left, num);
            } else {
                right = min(right, num - 1);
            }

        } else if (op == "<") {
            if (ans == 'Y') {
                right = min(right, num - 1);
            } else {
                left = max(left, num);
            }

        } else if (op == "<=") {
            if (ans == 'Y') {
                right = min(right, num);
            } else {
                left = max(left, num + 1);
            }
        }
    }
    if (left > right) {
        cout << "Impossible";
        return 0;
    }
    cout << left;
}