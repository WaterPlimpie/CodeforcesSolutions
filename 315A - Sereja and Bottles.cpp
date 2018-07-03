#include <bits/stdc++.h>
using namespace std;
int a[104], b[104];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d %d", a + i, b + i);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        bool flag = 0;
        for (int j = 1; j <= n; ++j) {
            if (i == j) {
                continue;
            }
            if (b[j] == a[i]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            ++ans;
        }
    }
    printf("%d", ans);
}