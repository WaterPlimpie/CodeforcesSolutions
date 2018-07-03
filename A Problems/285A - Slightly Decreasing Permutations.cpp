//
//  285A - Slightly Decreasing Permutations.cpp
//  PracticeOne
//
//  Created by Randa H. Moustafa on 04/15/18.
//  Copyright © 2018 Randa H. Moustafa. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int normal = n - k - 1;
    for (int i = 1; i <= normal; ++i) {
        cout << i << " ";
    }
    for (; n > normal; --n) {
        cout << n << " ";
    }
}
