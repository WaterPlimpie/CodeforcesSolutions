#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int arr[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", arr + i);
    }
    int left = 0;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] < arr[i - 1]) {
            left = i - 1;
            break;
        }
    }
    int right = n + 1;
    for (int i = n; i > 0; --i) {
        if (arr[i] < arr[i - 1]) {
            right = i;
            break;
        }
    }
    if (left == 0) {
        printf("yes\n1 1");
        return 0;
    }
    reverse(arr + left, arr + right + 1);
    for (int i = 2; i <= n; ++i) {
        if (arr[i] < arr[i - 1]) {
            printf("no");
            return 0;
        }
    }
    printf("yes\n");

    printf("%d %d", left, right);
}