#include <bits/stdc++.h>
using namespace std;
int arr[10004];
int main() {
    int n, m, d;
    scanf("%d %d %d", &n, &m, &d);
    int sz = n * m;
    for (int i = 0; i < sz; ++i) {
        scanf("%d", arr + i);
    }
    sort(arr, arr + sz);
    int med = arr[(sz >> 1)];
    long long sum = 0;
    long long mod = med % d;
    for (int i = 0; i < sz; ++i) {
        if (arr[i] % d != mod) {
            printf("-1");
            return 0;
        }
        sum += abs(arr[i] - med) / d;
    }
    printf("%lld", sum);

}