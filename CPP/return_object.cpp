#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double gpa;

        Student(int roll, int cls, double gpa) {
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};

Student fun() {
    Student john(2, 5, 5.00);
    return john;
}

int main() {
    Student get = fun();
    cout << get.roll << " " << get.cls << " " << get.gpa << endl;
    return 0;
}



// int a[3] = {11, 22, 33};

// int* fun() {
//     for(int i = 0; i < 3; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return a;
// }

// int main() {
//     int *get = fun();
//     for(int i = 0; i < 3; i++) {
//         cout << get[i] << " ";  
//     }
//     return 0;
// }