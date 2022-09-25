#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = -1e9;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0 && a[a[i]] == i) {
            ans += 1;
            a[i] = 0;
            a[a[i]] = 0;
        }
    }
    cout << ans << endl;
}