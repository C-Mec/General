#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    int tt = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++) {
        if (a[i + 1] == 1 && a[i - 1] == 1 && a[i] == 0) {
            ans++;
            if (a[i + 2] == 0 && a[i + 3] == 1 && tt != i) {
                ans--;
                tt = i + 2;
            }
        }
    }

    cout << ans << endl;
}