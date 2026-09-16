#include <iostream>
using namespace std;
int findLarger(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
string odd_even(int a){
    if (a % 2 == 0){
        return to_string(a) + " is an even number";
    }
    else;
    {
        return to_string(a) + " is an odd number";
    }
}
int main () {
    int num1;
    int num2;
    int num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Larger Number: " << findLarger(num1, num2)<<endl;
    cout << "Enter a number: ";
    cin >> num3;
    cout << odd_even(num3)<<endl;
    return 0;
}