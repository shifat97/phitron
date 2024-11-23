#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 'a') {
            a[i] = a[i] + 32;
        }
        if (b[i] < 'a') {
            b[i] = b[i] + 32;
        } 
    
        if (a[i] == b[i]) {
            continue;
        } else if (a[i] < b[i]) {
            flag = 1;
            cout << -1 << endl;
            break;
        } else {
            flag = 1;
            cout << 1 << endl;
            break;
        }
    }

    if (flag == 0) {
        cout << 0 << endl;
    }

    return 0;
}