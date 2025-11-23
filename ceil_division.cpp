#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i<t; i++) {
        int n , x;
        cin >> n >> x;
        int k = n * x;
        float p = (float)k/4;
        
        if(p == (int)p) {
            cout << p << endl;
        }

        else{ 
        cout << (int)p+1 << endl;
        }
    }

    return 0;

}
