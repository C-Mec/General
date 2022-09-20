#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    string b;
    for (int i = 0; i < n.size(); i++) {
        b = b + '_';
    }
    char a;
    while (b != n) {
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
