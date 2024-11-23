#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> dist;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            dist.insert(s[i]);
        }
    }
    cout << dist.size() << endl;
    return 0;
}