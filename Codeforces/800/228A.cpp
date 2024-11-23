#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int unique_count = 4; 

    if (s1 == s2 || s1 == s3 || s1 == s4) unique_count--;
    if (s2 == s3 || s2 == s4) unique_count--;
    if (s3 == s4) unique_count--;

    int horseshoes_to_buy = 4 - unique_count;

    cout << horseshoes_to_buy << endl;

    return 0;
}
