#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    long long ans = 0;
    int x = 0;
    if (m != 1) {
        for (int i = 0; i < n; i++) {
            x = 0;
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    x = 1;
                } else {
                    ans += x;
                }
            }
            x = 0;
            for (int j = m - 1; j >= 0; j--) {
                if (a[i][j] == 1) {
                    x = 1;
                } else {
                    ans += x;
                }
            }
        }
    }
    if (n != 1) {
        for (int i = 0; i < m; i++) {
            x = 0;
            for (int j = 0; j < n; j++) {
                if (a[j][i] == 1) {
                    x = 1;
                } else {
                    ans += x;
                }
            }
            x = 0;
            for (int j = m - 1; j >= 0; j--) {
                if (a[j][i] == 1) {
                    x = 1;
                } else {
                    ans += x;
                }
            }
        }
    }
    cout << ans << endl;
}
