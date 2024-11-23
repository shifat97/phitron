#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a[t];
    for(int i = 0; i < t; i++) {
        cin >> a[i];
    }
    int n = a[0], count = 1;
    for (int i = 0; i < t; i++) {
        if (a[i] == n) {
            count *= 1;
        } else {
            count += 1;
            n = a[i];
        }
    }
    cout << count << endl;
    return 0;
}