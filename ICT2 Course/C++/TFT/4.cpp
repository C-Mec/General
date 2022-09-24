#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int c[26], d[26];
    for (int i = 0; i < 26; i++) {
        c[i] = 0;
        d[i] = 0;
    }
    for (int i = 0; i < a.size(); i++) {
        c[a[i] - 97]++;
        d[b[i] - 97]++;
    }
    sort(c, c + 26);
    sort(d, d + 26);
    for (int i = 0; i < 26; i++) {
        if (c[i] != d[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}