#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    long long maxS = n * n;
    long long ans = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            long long temp = a * a + b * b;
            if (temp > maxS) {
                break;
            }
            long long temp2 = sqrt(temp);
            if (temp2 * temp2 == temp) {
                ++ans;
            }
        }
    }
    printf("%lld", ans);
}