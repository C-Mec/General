#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[4];
    int ans = 0;
    int t;
    for (int i = 0; i <= n - 2; i++) {
        for (int j = 0; j <= m - 2; j++) {
            t = 0;
            for (int k = 0; k < 4; k++) {
                b[k] = 0;
            }
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    if (a[i + k][j + l] == 'a') {
                        b[0]++;
                    } else if (a[i + k][j + l] == 'c') {
                        b[1]++;
                    } else if (a[i + k][j + l] == 'e') {
                        b[2]++;
                    } else if (a[i + k][j + l] == 'f') {
                        b[3]++;
                    }
                }
            }
            for (int k = 0; k < 4; k++) {
                if (b[k] != 1) {
                    t = 1;
                    break;
                }
            }
            if (t == 0) ans++;
        }
    }
    cout << ans << endl;
}