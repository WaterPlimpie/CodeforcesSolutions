#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    int mat[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> c;
            if (c == '#') {
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int cnt = mat[i][j] + mat[i + 1][j] + mat[i][j + 1] + mat[i + 1][j + 1];
            if (cnt != 2) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}