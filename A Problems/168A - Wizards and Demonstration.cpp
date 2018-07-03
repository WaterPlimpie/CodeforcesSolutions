//
//  168A - Wizards and Demonstration.cpp
//  PracticeOne
//
//  Created by Randa H. Moustafa on 04/15/18.
//  Copyright © 2018 Randa H. Moustafa. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int percent = x * 100 / n;
    int ans = 0;
    while (percent < y) {
        ++ans;
        ++x;
        percent = x * 100 / n;
    }
    cout << ans;
}
