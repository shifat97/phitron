#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    int freq[26] = {0};
    for (int i = 0; i < a.size(); i++) {
        freq[a[i] - 'A']++;
    }
    for (int i = 0; i < b.size(); i++) {
        freq[b[i] - 'A']++;
    }
    for (int i = 0; i < c.size(); i++) {
        freq[c[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}