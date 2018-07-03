#include <bits/stdc++.h>
using namespace std;

int main() {
    char trump;
    string one, two;
    cin >> trump >> one >> two;
    map<char, int> dict;
    dict['6'] = 1;
    dict['7'] = 2;
    dict['8'] = 3;
    dict['9'] = 4;
    dict['T'] = 5;
    dict['J'] = 6;
    dict['Q'] = 7;
    dict['K'] = 8;
    dict['A'] = 9;
    if (one[1] == trump && two[1] != trump) {
        cout << "YES";
        return 0;
    }
    if (two[1] == trump && one[1] != trump) {
        cout << "NO";
        return 0;
    }

    if (one[1] != two[1]) {
        cout << "NO";
        return 0;
    }
    if (dict[one[0]] > dict[two[0]]) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}