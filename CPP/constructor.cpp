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

        void display() {
            cout << roll << " " << cls << " " << gpa << endl;
        }
};

int main() {
    int r, c;
    double g;
    cin >> r >> c >> g;
    Student john(r, c, g);
    john.display();
    cin >> r >> c >> g;
    Student mark(r, c, g);
    mark.display();
    return 0;
}