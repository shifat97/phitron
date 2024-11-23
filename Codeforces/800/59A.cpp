#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int uppercase = 0, lowercase = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        } else {
            lowercase++;
        }
    }
    if (uppercase == lowercase || lowercase > uppercase) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}