#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//int main starts
int main() {
    int N;
    cin >> N;

//taking input of an array with unknown size and elements.
  
    int array[N];
    for(int k = 0; k < N; k++) {
        cin >> array[k];
    }

//using for loop to reverse iterating elements in the given array and priniting them.
  
    for(int i = 0; i < N; i++) {
        cout << array[(N-1)-i] << " ";
    }

    return 0;
}
