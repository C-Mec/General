#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    int m;
    cin >> m;
    string o;
    for (int i = 0; i < m; i++) {
        getline(cin, o);
        if (o[0] == n[0] || o[0] == n[0] - 32) {
            int t = 1;
            for (int j = 1; j < o.size(); j++) {
                if (o[j - 1] == ' ' && (o[j] == n[t] || o[j] == n[t] - 32)) {
                    t++;
                    if (o[j] >= 97)
                        o[j] -= 32;
                } else {
                    if (o[j] < 97 && o[j] >= 65)
                        o[j] += 32;
                }
            }
            if (o.size() != t) {
                cout << "No :(" << endl;
            } else {
                cout << o << endl;
            }
        } else {
            cout << o << endl;
        }
    }
}
