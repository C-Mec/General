#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    long double c;
    int ans = 0;
    cin >> a >> b;
    while (b > a) {
        c = (long double)b / (long double)a;
        if ((b / a) % 3 == 0 && (int)(c) == (c)) {
            b /= 3;
            ans++;
        } else if ((b / a) % 2 == 0 && (int)(c) == (c)) {
            b /= 2;
            ans++;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
    if (b / a != 1 && b % a != 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
}