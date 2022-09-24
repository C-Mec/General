#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    int a[26];
    for (int i = 0; i < 26; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < n.size(); i++) {
        a[n[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] % 2 != 0) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}