#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    int b[26];
    int ans = 0;
    if (n > 26) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < 26; i++) {
            b[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            b[a[i] - 97]++;
        }
        for (int i = 0; i < 26; i++) {
            if (b[i] > 1) {
                ans += b[i] - 1;
            }
        }
        cout << ans << endl;
    }
}