#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[2 * n];
    long long ans = 0;
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
    int max, maxid;
    for (int i = 0; i < n; i++) {
        max = 0;
        for (int j = 0; j < 2 * n - 2 * i; j++) {
            if (a[j] > max) {
                maxid = j;
                max = a[j];
            }
        }
        ans += max;
        if (maxid > ((n - i - 1) / 2) - 0.5) {
            for (int j = ((n - i - 1) / 2) - 0.5; j < maxid - 1; j++) {
                a[j] = a[j + 1];
            }
        } else {
            for (int j = maxid; j < ((n - i - 1) / 2) - 1.5; j++) {
                a[j] = a[j + 1];
            }
        }
        for (int j = maxid - 1; j < 2 * n - 2 * i; j++) {
            a[j] = a[j + 2];
        }
    }
    cout << ans << endl;
}