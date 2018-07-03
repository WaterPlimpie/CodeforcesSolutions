#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int pos = 0, neg = 0;
    for (int i = 1; i <= n; ++i) {
        int temp;
        scanf("%d", &temp);
        if (temp == 1) {
            ++pos;
        } else {
            ++neg;
        }
    }
    for (int i = 0; i < m; ++i) {
        int l, r;
        scanf("%d %d", &l, &r);
        int range = r - l + 1;
        if (range & 1) {
            printf("0\n");
        } else {
            if (range / 2 <= neg && range / 2 <= pos) {
                printf("1\n");
                continue;
            }
            printf("0\n");
        }
    }
}