#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
    public:
    void isPalindrome(int x) {
    stringstream ss;
    ss << x;
    string numl = ss.str();

    vector<char> reversed_number;
    vector<char> number;

    for(int i=0; i<numl.length(); i++) {
        number.push_back(numl[i]);
    }

    for(int i=(numl.length()-1); i>=0; i--) {
        reversed_number.push_back(numl[i]);
    }

    if(number == reversed_number) {
        cout << "is palindrome" << endl;
    }
    else {
        cout << "is not palindrome" << endl;
    }

    }
};

int main() {
    int x;
    cin >> x;
    Solution s;
    s.isPalindrome(x);

    return 0;
}
