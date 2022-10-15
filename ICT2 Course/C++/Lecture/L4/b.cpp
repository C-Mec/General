#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int t;
    int a1 = 0, a2 = 0, a3;
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            a1 += a[j - 1];
        }
        for (int j = i; j <= n; j++) {
            a2 += a[j - 1];
        }
        if (a1 >= x && a1 <= y && a2 >= x && a2 <= y) {
            cout << i << endl;
            return 0;
        }
        a1 = 0;
        a2 = 0;
    }
    cout << 0 << endl;
}