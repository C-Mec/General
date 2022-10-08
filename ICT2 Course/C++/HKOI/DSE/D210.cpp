#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    pair<int, int> a[n];
    float ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 1; i < n; i++) {
        ans += (a[i].second + a[i - 1].second) * (a[i - 1].first - a[i].first);
    }
    ans += (a[n - 1].second + a[0].second) * (a[n - 1].first - a[0].first);
    cout << fixed << setprecision(1) << ans / 2 << endl;
}