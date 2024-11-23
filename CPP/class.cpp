#include<bits/stdc++.h>
using namespace std;

// Class is a user defined data type.

class Student {
    public:
        string name;
        int roll;
        char section;
        double gpa;
};

int main() {
    Student a, b;
    getline(cin, a.name);
    cin >> a.roll >> a.gpa;
    
    cin.ignore();

    getline(cin, b.name);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    // john.name = "John Doe Trumps";
    // john.roll = 201;
    // john.section = 'A';
    // john.gpa = 3.58;

    // cout << john.name << endl;
    // cout << john.section << endl;

    // Student mark;
    // mark.name = "Mark Wines";
    // cout << mark.name << endl;
    return 0;
}