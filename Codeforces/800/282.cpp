#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    cin.ignore();
    while(n--) {
        string s;
        getline(cin, s);
        if (s == "X++") {
            x += 1;
        }
        if (s == "++X") {
            x += 1;
        }
        if (s == "X--") {
            x -= 1;
        }
        if (s == "--X") {
            x -= 1;
        }
    }
    cout << x << endl;
    return 0;
}