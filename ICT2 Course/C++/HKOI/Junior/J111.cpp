#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    char b;
    cin >> a >> b;
    int x = b - 'a';
    string s;
    getline(cin, s);
    string s1 = "";
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] <= 90 && s[i] >= 65)) {
            if (s[i] - x < 65)
                s1 += s[i] - x + 26;
            else
                s1 += s[i] - x;
        } else if (s[i] <= 97 && s[i] >= 122) {
            if (s[i] - x < 97)
                s1 += s[i] - x + 26;
            else
                s1 += s[i] - x;
        } else {
            s1 += s[i];
        }
    }
    cout << s1 << endl;
}