#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> count;
        int k;
        int NumCount;
        int max = 0;
        int sol;

        for(int i=0; i<nums.size(); i++) {
            k = nums[i];
            NumCount = 1;

            for(int j=0;j<nums.size(); j++) {

                if(k == nums[j]) {
                    NumCount+=1;
                }
                else {
                    continue;
                }
                    
                }

                count.push_back(NumCount);

            }

            for(int i=0; i<nums.size(); i++) {
                if(count[i]>max) {
                    max = count[i];
                }
            }

            for(int i=0; i<nums.size(); i++) {
                if(max==count[i]) {
                    sol = nums[i];
                }
                else {
                    continue;
                }
            }

            return sol;

        }
    };

    int main() {
        vector<int> nums;
        string line;

        getline(cin,line);
        stringstream ss(line);
        int x;

        while(ss >> x) {
            nums.push_back(x);
        }

        Solution s;
        cout << s.repeatedNTimes(nums) << endl;

        return 0;
    }
