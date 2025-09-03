#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    int p;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            p = 0;
            for (int k = 0; k < m; k++) {
                if (a[i][k] != 'o' && a[j][k] != 'o') {
                    p = 1;
                    break;
                }
            }
            if (p == 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}