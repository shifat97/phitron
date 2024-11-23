#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = INT_MIN;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(i == 0) {
            total = a + b;
            m = total;
        } else {
            total = (total - a) + b;
            m = max(m, total);
        }
    }
    cout << m << endl;
    return 0;
}