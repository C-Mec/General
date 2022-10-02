#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    int a[26], c[26];
    for (int i = 0; i < 26; i++) {
        a[i] = 0;
        c[i] = 0;
    }

    for (int i = 0; i < n.size(); i++) {
        a[n[i] - 65]++;
    }
    int m;
    cin >> m;
    bool ans = true;
    for (int i = 0; i < m; i++) {
        ans = true;
        string b;
        cin >> b;
        for (int j = 0; j < b.size(); j++) {
            c[b[j] - 65]++;
        }
        for (int j = 0; j < 26; j++) {
            if (c[j] > a[j]) {
                ans = false;
            }
            c[j] = 0;
        }
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}