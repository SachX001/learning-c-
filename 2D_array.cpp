#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> matrix;
    int n, q;
    cin >> n >> q;

    matrix.resize(n);  

    for (int k = 0; k < n; k++) {
        int p;
        cin >> p;
        for (int i = 0; i < p; i++) {
            int x;
            cin >> x;
            matrix[k].push_back(x);  
        }
    }

    for(int r=0; r< q; r++) {
        int row , col;
        cin >> row >> col;
        cout << matrix[row][col] << endl;
    }
    
    return 0;
}
