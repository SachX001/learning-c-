#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    int num;
    int n;

public:
    Student(int num, int n) {
        this->num = num;
        this->n = n;
    }

    int CalculateTotalScore(int num, int n) {
        int sum = 0;
        int totals[n];
        int maximum = 0;  

        for (int i = 0; i < 5; i++) {
            sum += num;
            for (int j = 0; j < n; j++) {
                totals[j] = sum;
            }
        }

        for (int i = 0; i < n; i++) {
            if (totals[0] == totals[i]) {
                maximum++;
            }
        }
        return maximum;
    }
};

int main() {
    vector<vector<int>> scores;

    int n;
    cin >> n;

    scores.resize(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            scores[i].push_back(x);
        }
    }

    
    int zerothSum = 0;
    for (int j = 0; j < 5; j++) {
        zerothSum += scores[0][j];
    }

    
    int output = 0;
    for (int i = 0; i < n; i++) {
        if(i == 0) continue;
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += scores[i][j];
        }
        if (sum >= zerothSum) output++;
    }

    cout << output << endl;

    return 0;
}
