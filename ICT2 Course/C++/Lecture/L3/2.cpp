#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char a[16];
    int b[10];
    for (int i = 0; i < 10; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < 16; i++) {
        cin >> a[i];
        if (a[i] != '*') {
            b[a[i] - 48]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (b[i] > n * 2) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}