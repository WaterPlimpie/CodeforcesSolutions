#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int, int>> pq;
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, temp;
    scanf("%d", &n);
    for (int i = 1; i <= (n << 1); ++i) {
        scanf("%d", &temp);
        pq.push({temp, i});
    }
    temp = pq.top().first;
    int idx = pq.top().second;
    pq.pop();
    string ans = "";
    while (pq.size()) {
        if (pq.top().first == temp) {
            ans += to_string(idx) + " " + to_string(pq.top().second) + "\n";
            pq.pop();
            if (pq.size()) {
                temp = pq.top().first;
                idx = pq.top().second;
                pq.pop();
            }
        } else {
            break;
        }
    }
    if (pq.size()) {
        printf("-1");
        return 0;
    }
    cout << ans;
}
