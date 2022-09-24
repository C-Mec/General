#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    int m;
    cin >> m >> n;
    int o, e;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            o += n[i] - 48;
        } else {
            e += n[i] - 48;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (m % 2 == 1 && e + i - o % 11 == 0) {
            cout << i << endl;
            return 0;
        } else if (m % 2 == 0 && e - o - i % 11 == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}