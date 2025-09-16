#include <vector>
#include <iostream>
#include <sstream>
using namespace std;


int main() {
    string s;
    cin >> s;

    vector<char> num;

    for(int i=0 ; i<s.size() ; i++) {  
        num.push_back(s[i]);
    }

    string str(num.begin() , num.end());

    stringstream ss(str);
    char ch;
    int a;

    while(ss >> a) {
        cout << a << endl;
        ss >> ch;
    }

    return 0;

}
