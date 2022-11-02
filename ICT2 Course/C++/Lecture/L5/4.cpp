#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long ans = 0;
    vector<int> n;
    vector<int> c;
    vector<int> d;
    int t, tt;
    for (int i = 0; i <= 100; i++) {
        if (pow(2, i) > 2 * 1e9) {
            t = i - 1;
            break;
        }
        c.push_back(pow(2, i));
    }
    for (int i = 0; i <= 100; i++) {
        if (pow(3, i) > 2 * 1e9) {
            tt = i - 1;
            break;
        }
        d.push_back(pow(3, i));
    }
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < d.size(); j++) {
            if (c[i] * d[j] <= 2 * 1e9)
                n.push_back(c[i] * d[j]);
        }
    }
    for (long long i = 0; i <= n.size(); i++) {
        if (n[i] <= b && n[i] >= a) {
            ans++;
        }
    }
    cout << ans << endl;
}