#include <iostream> 
using namespace std; // easing out the use of std::(function) 

//intended to make a function called SqNum which can be recalled whenever there's a need to get squares of series of numbers
int SqNum(int n) {
    int sq= n * n;
    return sq;
    
}
int main () {
   int num1, num2 ;
   cout << "Enter starting and ending numbers: " << endl;
   cin >> num1 >> num2 ; 

  //used for loop rather than while as iteration count is known 

  //for loop starts
   for(int j = num1 ; j < num2+ 1 ; j++) {
    cout << j << " - " << SqNum(j) << endl;
   }
  //for loop ends
  
    return 0;
}
