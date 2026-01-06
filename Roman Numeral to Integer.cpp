#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
    public:
    int romanToInt(string s) {
    int initial_sum = 0;
    char cursor;
    int diff_sum = 0;
    int check = 0;
    
    char Roman_NumberSet[7] = {'I' , 'V', 'X' , 'L' , 'C' , 'D' , 'M'};
    int Integer_NumberSet[7] = {1 , 5 , 10 , 50 , 100 , 500 , 1000};
    vector<int> Value_set;
    vector<int> diff_value;

    for(int i=0; i<s.length(); i++) {
        cursor = char(s[i]);

        for(int j=0; j<7; j++) {
            if(cursor == Roman_NumberSet[j]) {
                Value_set.push_back(Integer_NumberSet[j]);
            }

            if(Value_set.size()==s.length()) {
                break;
            }
            else {
                continue;
            }
        }
    }

    for(int i=0; i<Value_set.size(); i++) {
        initial_sum += Value_set[i];
    }

    for(int i=0; i<s.length(); i++) {
        if(i != (s.length()-1)) {
        if(s[i] == 'I' && s[i+1] == 'V') {
            diff_value.push_back(2);
            int check = 1;
        }

        if(s[i] == 'I' && s[i+1] == 'X') {
            diff_value.push_back(2);
            int check = 1;
        }

        if(s[i] == 'X' && s[i+1] == 'L') {
            diff_value.push_back(20);
            int check = 1;
        }

        if(s[i] == 'X' && s[i+1] == 'C') {
            diff_value.push_back(20);     
            int check = 1;           
        }

        if(s[i] == 'C' && s[i+1] == 'D') {
            diff_value.push_back(200);
            int check = 1;
        }

         if(s[i] == 'C' && s[i+1] == 'M') {
            diff_value.push_back(200);
            int check = 1;
        }
    }
    else {
        if(int check = 0 && s[i-1] == 'I' && s[i] == 'V') {
            diff_value.push_back(2);
        }

        if(int check = 0 && s[i-1] == 'I' && s[i] == 'X') {
            diff_value.push_back(2);
        }

        if(int check = 0 && s[i-1] == 'X' && s[i] == 'L') {
            diff_value.push_back(20);
        }

        if(int check = 0 && s[i-1] == 'X' && s[i] == 'C') {
            diff_value.push_back(20);                
        }

        if(int check = 0 && s[i-1] == 'C' && s[i] == 'D') {
            diff_value.push_back(200);
        }

         if(int check = 0 && s[i-1] == 'C' && s[i] == 'M') {
            diff_value.push_back(200);
        }
    }
    }

    for(int i=0; i<diff_value.size(); i++) {
        diff_sum += diff_value[i];
    }

    for(int i=0; i<diff_value.size(); i++) {
        cout << diff_value[i] << " ";
    }
    cout << endl;

    cout << (initial_sum - diff_sum) << endl;

    return (initial_sum - diff_sum);
    }
};

int main() {
    string s;
    cin >> s;
    Solution num;
    num.romanToInt(s);

    return 0;
}
