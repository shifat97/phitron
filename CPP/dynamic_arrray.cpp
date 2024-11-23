#include<bits/stdc++.h>
using namespace std;

void fun(int* a) {
    // int *a = new int[5];
    // for (int i = 0; i < 5; i++) {
    //     cin >> a[i];
    // }
    // return a; 
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int* a = new int[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    fun(a);
    // int *x = fun();
    // for (int i = 0; i < 5; i++) {
    //     cout << x[i] << endl;
    // }
    return 0;
}