#include <bits/stdc++.h>
using namespace std;
int main() {
    // binary search is faster
    int n, m, q;
    cin >> n >> m >> q;
    pair<long long, long long> a[n];
    long long b, c;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    long long ans = 0;
    for (int i = 0; i < q; i++) {
        cin >> b >> c;
        ans = 0;
        for (int j = 0; j < n; j++) {
            if (a[j].first - b <= c && a[j].second + b >= c) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}