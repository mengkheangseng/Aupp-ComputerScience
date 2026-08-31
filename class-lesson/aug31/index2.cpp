#include <iostream>
using namespace std;
int main (){
    int number;
    cout << "Enter your age: ";
    cin >> number;
    if (number >= 18){
        cout << "You are adult. You can enter." <<endl;
    }
    else {
        cout << "Sorry you are too young. You cannot enter." << endl;
    }
    return 0;
}