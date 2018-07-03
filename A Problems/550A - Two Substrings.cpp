#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            //found AB
            for (int j = i + 2; j < s.length() + 1; ++j) {
                if (s[j] == 'B' && s[j + 1] == 'A') {
                    //found non overlapping BA
                    cout << "YES";
                    return 0;
                }
            }
            break;
        }
    }

    //now do the same but reverse the substrings
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == 'B' && s[i + 1] == 'A') {
            //found BA
            for (int j = i + 2; j < s.length() + 1; ++j) {
                if (s[j] == 'A' && s[j + 1] == 'B') {
                    //found non overlapping AB
                    cout << "YES";
                    return 0;
                }
            }
            break;
        }
    }

    //if the above turns up nothing, then they were not found
    cout << "NO";
    return 0;
}