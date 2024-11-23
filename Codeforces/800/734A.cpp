#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A = 0, D = 0;
    while(n--) {
        char c;
        cin >> c;
        if (c == 'A') {
            A++;
        } else {
            D++;
        }
    }

    if (A == D) {
        cout << "Friendship" << endl;
    } else if (A > D) {
        cout << "Anton" << endl;
    } else {
        cout << "Danik" << endl;
    }

    return 0;
}