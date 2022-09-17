#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    char b[n.size()];
    for (int i = 0; i < n.size(); i++) {
        b[i] = '_';
    }

    while (b != n) {
        char a;
        cin >> a;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == a) {
                b[i] = a;
            }
            cout << b[i];
        }
        cout << endl;
    }
}
