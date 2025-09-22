#include <iostream>
#include <string>
using namespace std;

class Input {

    private:

    int age;
    string first_name;
    string second_name;
    int standard;

    public:
    Input(int age, string first_name , string second_name , int standard) {
        this->age = age;
        this->first_name = first_name;
        this->second_name = second_name;
        this->standard = standard;
    }

    int getage() {return age;}
    string getname1() {return first_name;}
    string getname2() {return second_name;}
    int getstand() {return standard;}

    void details() {
        cout << age << endl 
        << first_name << endl
        << second_name << endl 
        << standard << endl;
    }
    
};

int main() {
    int age;
    cin >> age;
    string first_name;
    cin >> first_name;
    string second_name;
    cin >> second_name;
    int standard;
    cin >> standard;
    Input inp1(age , first_name , second_name , standard);
    inp1.details();

    return 0;
 
}
