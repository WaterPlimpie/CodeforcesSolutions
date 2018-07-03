#include <bits/stdc++.h>
using namespace std;

int main() {
    int filters, devices, wsockets, fsockets[55];
    cin >> filters >> devices >> wsockets;
    for (int i = 0; i < filters; ++i) {
        cin >> fsockets[i];
    }
    sort(fsockets, fsockets + filters, greater<int>());
    if (devices <= wsockets) {
        cout << 0;
        return 0;
    }
    int idx = 0;
    int ans = 0;
    while (wsockets && devices) {
        devices -= wsockets;
        wsockets = 0;
    }
    if (!devices) {
        cout << ans;
        return 0;
    }
    
    while (devices && idx < filters) {
        ++devices;
        ++ans;
        devices -= fsockets[idx++];
        devices = max(devices, 0);
    }
    if (!devices) {
        cout << ans;
        return 0;
    }
    if (idx == filters) {
        cout << -1;
        return 0;
    }
    cout << -1;
}