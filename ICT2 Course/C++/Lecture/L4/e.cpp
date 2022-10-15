#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int a[x];
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++) {
        b[i] = -1;
    }
    int b1 = 0;
    long long ans = 3 * n - 2 - x;
    for (int i = 0; i < x - 1; i++) {
        b[b1++] = a[i];
        for (int j = 0; j < b1; j++) {
            if (a[i] == b[j]) {
            }
        }
    }
    cout << ans << endl;
}