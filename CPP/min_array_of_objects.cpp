#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // int mn = a[0].marks;
    Student mn;
    mn.marks = a[0].marks;
    for (int i = 0; i < n; i++) {
        if (a[i].marks < mn.marks) {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    return 0;
}