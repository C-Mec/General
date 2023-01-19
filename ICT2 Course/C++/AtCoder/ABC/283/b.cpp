#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b;
    cin >> b;
    int t;
    int c, d;
    for (int i = 0; i < b; i++) {
        cin >> t;
        if (t == 1) {
            cin >> c >> d;
            a[c - 1] = d;
        } else {
            cin >> c;
            cout << a[c - 1] << endl;
        }
    }
}