#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    for (int i = 0; i < 10; ++i) {
        int temp = a * 10 + i;
        if (temp % b) {
            continue;
        }
        --n;
        printf("%d", temp);
        while (n--) {
            printf("0");
        }
        return 0;
    }
    printf("-1");
    return 0;
}