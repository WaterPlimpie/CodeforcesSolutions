#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int cnts[N];
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a * b * c;
    cnts[1] = 1;
    for (int i = 2; i <= sum; ++i) {
        cnts[i] = 2;
    }
    for (int i = 2; i <= sum >> 1; ++i) {
        for (int k = i << 1; k <= sum; k += i) {
            ++cnts[k];
        }
    }
    int ans = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                int temp = i * j * k;
                ans += cnts[temp];
                if (ans >= 1073741824) {
                    ans -= 1073741824;
                }
            }
        }
    }
    printf("%d", ans);
}