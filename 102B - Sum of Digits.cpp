//
//  102B - Sum of Digits.cpp
//  PracticeOne
//
//  Created by Randa H. Moustafa on 04/15/18.
//  Copyright © 2018 Randa H. Moustafa. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;


int main(){
    string n;
    cin >> n;
    if (n.length() == 1) {
        cout << 0;
        return 0;
    }
    long long sum = 0;
    for (int i = 0; i < n.length(); ++i) {
        sum += n[i] - '0';
    }
    int ans = 1;
    while (sum > 9) {
        ++ans;
        n = to_string(sum);
        sum = 0;
        for (int i = 0; i < n.length(); ++i) {
            sum += n[i] - '0';
        }
    }
    cout << ans;
}
