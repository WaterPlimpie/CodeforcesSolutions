//
//  381A - Sereja and Dima.cpp
//
//  Created by Randa H. Moustafa on 04/17/18.
//  Copyright © 2018 Randa H. Moustafa. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int arr[1005];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    int first = 0, second = 0;
    int s = 0, e = n - 1, cnt = 0;
    while (cnt < n) {
        ++cnt;
        if (arr[s] > arr[e]) {
            if (cnt & 1) {
                first += arr[s++];
            } else {
                second += arr[s++];
            }
        } else {
            if (cnt & 1) {
                first += arr[e--];
            } else {
                second += arr[e--];
            }
        }
    }
    printf("%d %d", first, second);
}
