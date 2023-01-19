#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    string n = "";
    for (int i = 0; i < a; i++) {
        n += 'A' + i;
    }
    cout << n << endl;
}