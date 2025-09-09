#include <iostream>
using namespace std;

int main() {
	int end;
	int i = 1;
	cin >> end;
	do {
	   i*=end;
	    end--;
	} while(end>=1);
	
	cout << i << endl;

	return 0;
}
