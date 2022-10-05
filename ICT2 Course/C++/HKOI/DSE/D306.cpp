#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    for (int i = 1; i < n.size(); i++) {
        if (n[i] == '@') {
            for (int j = i + 2; j < n.size() - 1; j++) {
                if (n[i] == '.') {
                    cout << "Valid\n";
                    return 0;
                }
            }
        }
    }
    cout << "Invalid\n";
}