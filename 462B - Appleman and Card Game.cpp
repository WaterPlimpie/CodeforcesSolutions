#include <bits/stdc++.h>
using namespace std;
int cnts[26];
int main() {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        ++cnts[s[i] - 'A'];
    }
    priority_queue<long long> pq;
    for (int i = 0; i < 26; ++i) {
        if (cnts[i]) {
            pq.push(cnts[i]);
        }
    }
    long long ans = 0;
    while (pq.size()) {
        if (pq.top() >= k) {
            ans += k * k;
            cout << ans;
            return 0;
        }
        ans += pq.top() * pq.top();
        k -= pq.top();
        pq.pop();
    }
    cout << ans;
}