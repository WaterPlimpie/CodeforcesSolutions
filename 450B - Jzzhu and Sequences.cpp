#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long x, y;
    long long mod = 1000000007;
    long long ans;
    scanf("%lld %lld", &x, &y);
    scanf("%d", &n);
    if (n % 3 == 0) {
        if (n & 1) {
            ans = y - x;
        } else {
            ans = x - y;
        }
    } else if (n % 3 == 1) {
        if (n & 1) {
            ans = x;
        } else {
            ans = -x;
        }
    } else {
        if (n & 1) {
            ans = -y;
        } else {
            ans = y;
        }
    }
    while (ans < 0)
        ans += mod;
    ans = ans % mod;
    printf("%lld", ans);
}