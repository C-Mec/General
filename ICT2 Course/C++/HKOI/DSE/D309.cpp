#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 97) {
            a[i] += 32;
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] < 97) {
            b[i] += 32;
        }
    }

    int c = min(a.size(), b.size());
    for (int i = 0; i < c; i++) {
        if (a[i] > b[i]) {
            cout << "Greater\n";
            return 0;
        } else if (a[i] < b[i]) {
            cout << "Smaller\n";
            return 0;
        }
    }
    if (a.size() > b.size())
        cout << "Greater\n";
    else if (a.size() < b.size())
        cout << "Smaller\n";
    else
        cout << "Equal\n";
}