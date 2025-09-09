#include <iostream>
using namespace std;

int main() {
    // update your code here
    float side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    
    if(side1 == side2 && side2 == side3) {
        cout << "equilateral" << endl;
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "isosceles" << endl;
    }
    else {
        cout << "scalene" << endl;
    }

    return 0;
}
