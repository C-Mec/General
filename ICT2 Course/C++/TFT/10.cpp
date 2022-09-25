#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        ans = lcm(ans, a[i]);
    }
    cout << ans << endl;
}