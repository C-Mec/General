#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string c;
    cin >> c;
    int n[26];

    for (int i = 0; i < 26; i++) {
        n[i] = 0;
    }

    for (int i = 0; i < a; i++) {
        n[c[i] - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        if (n[i] > b) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}