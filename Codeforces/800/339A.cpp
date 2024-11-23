#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    for (int i = 0; i < s.size(); i += 2) {
        numbers.push_back(s[i] - '0');  
    }

    sort(numbers.begin(), numbers.end());

    string result;
    for (int i = 0; i < numbers.size(); ++i) {
        result += to_string(numbers[i]); 
        if (i < numbers.size() - 1) {
            result += '+';  
        }
    }

    cout << result << endl; 
    return 0;
}
