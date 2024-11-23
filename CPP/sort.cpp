#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    sort(a, a+n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    char a[5] = {'a', 'c', 'e', 'd', 'b'};

    sort(a, a + 5);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}