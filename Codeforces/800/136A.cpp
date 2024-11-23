#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], r[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        r[a[i]] = i; // r[2] = 1
    }
    
    for (int i = 1; i <= n; i++) {
        cout << r[i] << " ";
    }
    return 0;
}