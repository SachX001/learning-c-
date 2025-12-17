#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Student{
    private:
    vector<vector<int>> scores;
    int n;
    vector<int> total;
    int sum;
    int num;

    public:
    Student() {
        num = 0;
        sum = 0;
    }
    void input() {
        cin >> n;
        scores.resize(n);
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<5; j++) {
                int l;
                cin >> l;
                scores[i].push_back(l);
            }
        }
    }

    void calculateTotalScore() {
        total.clear();
        num = 0;
        sum = 0;
        for(int i=0; i<n; i++) {
            sum = 0;
            for(int j=0; j<5; j++) {
                sum+=scores[i][j];
            }
            total.push_back(sum);
        }

        for(int k=1; k<n; k++) {
            if(total[0]< total[k]) {
                num++;
            }
        }

        cout << num << endl;

    }

};


int main() {
    Student s;
    s.input();
    s.calculateTotalScore();
    s.DisplayScores();
    s.DisplayTotal();

    return 0;

}
