#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int multiply (int c, int d){
    return c * d;
}
int main () {
    int num1;
    int num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Sum = " << add(num1, num2) << endl;
    cout << "Product = "<<multiply(num1, num2)<<endl;
    return 0;
}