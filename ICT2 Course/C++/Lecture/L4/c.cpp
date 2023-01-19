#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[5000];
    int t;
    int ans = 0;
    int tt = 0;
    for (int i = 0; i < 5000; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> t;
        a[t - 1]++;
    }
    for (int i = 0; i < 5000; i++) {
        if (a[i] >= 2) {
            ans += 2;
        } else if (a[i] == 1) {
            ans += 1;
        }
    }
    for (int i = 4999; i >= 0; i--) {
        if (a[i] > 0) {
            if (a[i] == 1) {
                tt++;
            }
            t = i;
            break;
        }
    }
    if (tt == 0) {
        cout << ans - 1 << endl;
    } else {
        cout << ans << endl;
    }
    tt = 0;
    for (int i = 0; i < 5000; i++) {
        if (a[i] > 0) {
            if (tt == 0) {
                cout << i + 1;
                tt++;
            } else {
                cout << " " << i + 1;
            }
            a[i]--;
        }
    }
    for (int i = 4999; i >= 0; i--) {
        if (a[i] > 0) {
            if (i != t) {
                cout << " " << i + 1;
                a[i]--;
            }
        }
    }
}