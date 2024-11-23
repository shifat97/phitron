#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.size() < t.size() || t.size() < s.size()) {
        cout << "NO" << endl;
        return 0;
    }

    int flag = 1;
    for (int i = 0, j = t.size() - 1; i < s.size(); i++, j--) {
        if (s[i] != t[j]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}