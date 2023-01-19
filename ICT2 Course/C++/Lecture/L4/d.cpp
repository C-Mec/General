#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x, s;
    for (int i = 0; i < n; i++) {
        cin >> x >> s;
        int a[x];
        int t = 0;
        int smax = 0;
        int p = 0;
        int tt = 0;
        int ttt = 0;
        for (int j = 0; j < x; j++) {
            cin >> a[j];
            if (a[j] > smax && ttt == 0) {
                smax = a[j];
                p = j + 1;
            }
            t += a[j];
            if (t > s) {
                if (tt == 0) {
                    t -= smax;
                    ttt++;
                    tt++;
                }
            }
        }
        if (ttt == 0)
            cout << 0 << endl;
        else
            cout << p << endl;
    }
}