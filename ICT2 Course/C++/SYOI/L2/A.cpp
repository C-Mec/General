#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int a[201];
        int t;
        int ans = 0;
        for (int j = 0; j < 201; j++) {
            a[j] = 0;
        }
        for (int j = 0; j < m; j++) {
            cin >> t;
            a[t + 100]++;
        }
        for (int j = 0; j < 201; j++) {
            if (a[j] > 1) {
                if (a[-(j - 100) + 100] == 0) {
                    ans += 2;
                } else {
                    ans += 1;
                }
            } else if (a[j] == 1) {
                ans += 1;
            }
        }
        cout << ans << endl;
    }
}