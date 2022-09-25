#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a6, a9;
    int r = 1e9;
    long long ans = 0;
    while (n > 0) {
        r = 1;
        for (int i = 0; i <= 6; i++) {
            if (n - pow(6, i) > 0 && pow(6, i) > r) {
                r = pow(6, i);
            }
        }
        for (int i = 0; i <= 5; i++) {
            if (n - pow(9, i) > 0 && pow(9, i) > r) {
                r = pow(9, i);
            }
        }
        n -= r;
        ans += 1;
        cout << r << " " << n << endl;
    }
    cout << ans << endl;
}