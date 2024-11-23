#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[26] = {0}, count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i] - 'a'] > 0) {
            continue;
        }
        freq[s[i] - 'a']++;
        count++;
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}