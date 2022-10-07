#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, k;
    pair<long long, long long> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    long long b[n];
    int t1, t2;
    for (int i = 0; i < n; i++) {
        b[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> t1 >> t2;
        b[t1 - 1] += t2;
    }
    long long c[n];
    c[a[0].second] = b[a[0].second];
    for (int i = 1; i < n; i++) {
        if (a[i].second > a[i - 1].second) {
            if (b[a[i].second] > b[a[i - 1].second]) {
                c[a[i].second] = b[a[i].second];
            } else {
                c[a[i].second] = b[a[i - 1].second] + 1;
            }
        } else if (a[i].second == a[i - 1].second) {
            if (b[a[i].second] != b[a[i - 1].second]) {
                for (int k = i; k > 0; k--) {
                    if (b[a[k].second] == b[a[k - 1].second]) {
                        c[a[k - 1].second] = b[a[i].second];
                    } else {
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
}