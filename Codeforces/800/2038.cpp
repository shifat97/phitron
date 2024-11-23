#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string s;
        getline(cin, s);
        
        if (s[1] == '=') {
            if (s[0] == s[2]) {
                cout << s << endl;
            }
            else {
                if (s[0] < s[2]) {
                    s[0] = s[2] - s[0] + s[0];
                    cout << s << endl;
                } else {
                    s[2] = s[0] - s[2] + s[2];
                    cout << s << endl;
                }
            }
        } 
        
        if (s[1] == '<') {
            if (s[0] < s[2]) {
                cout << s << endl;
            } else {
                s[0] = '0';
                cout << s << endl;
            }
        }

        if (s[1] == '>') {
            if(s[0] > s[2]) {
                cout << s << endl;
            } else {
                s[2] = '0';
                cout << s << endl;
            }
        } 
    }
    return 0;
}