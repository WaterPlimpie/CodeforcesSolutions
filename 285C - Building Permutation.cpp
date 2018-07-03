#include <bits/stdc++.h>
using namespace std;

priority_queue<long long> pq;
int main() {
    int n;
    scanf("%d", &n);
    long long temp;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &temp);
        pq.push(temp);
    }
    long long ans = 0;
    while (pq.size()) {
        ans += abs(n - pq.top());
        pq.pop();
        --n;
    }
    printf("%lld", ans);
}