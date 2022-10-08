#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        int a[m];
        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }
        if (a[0] + a[1] <= a[m - 1]) {
            cout << 1 << ' ' << 2 << ' ' << m << endl;
        } else {
            cout << -1 << endl;
        }
    }
}