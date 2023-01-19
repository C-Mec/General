#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    if (n.size() == 8) {
        if (n[0] >= 'A' && n[0] <= 'Z' && n[7] >= 'A' && n[7] <= 'Z' && n[1] >= '1' && n[1] <= '9') {
            for (int i = 2; i < 7; i++) {
                if (!(n[i] >= '0' && n[i] <= '9')) {
                    cout << "No\n";
                    return 0;
                }
            }
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } else {
        cout << "No\n";
    }
}