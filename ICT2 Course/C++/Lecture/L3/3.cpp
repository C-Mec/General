#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int c[a];
    for (int i = 0; i < a; i++) {
        cin >> c[i];
    }
    sort(c, c + a);
    cout << c[a - b] << endl;
}