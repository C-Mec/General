#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    int a[4];
    int ans = 0;
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    if (n.size() % 2 == 1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == 'L') {
                a[0]++;
            } else if (n[i] == 'R') {
                a[1]++;
            } else if (n[i] == 'U') {
                a[2]++;
            } else {
                a[3]++;
            }
        }
        ans = abs(a[0] - a[1]) + abs(a[2] - a[3]);
        cout << ans / 2 << endl;
    }
}