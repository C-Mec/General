#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int tt = -1;
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '0' && b[i] == '0' && tt != i) {
            if (i != 0 && (a[i - 1] == '0' || b[i - 1] == '0')) {
                ans++;
                a[i] = 'X';
                b[i] = 'X';
            } else if (i != a.size() - 1 && (a[i + 1] == '0' || b[i + 1] == '0')) {
                ans++;
                tt = i + 1;
                if (a[i + 1] != '0' || b[i + 1] != '0') {
                    a[i + 1] = 'X';
                    b[i + 1] = 'X';
                }
            }
        }
    }
    cout << ans << endl;
}