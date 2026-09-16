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
int main () {
    int num1;
    int num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Larger Number: " << findLarger(num1, num2)<<endl;
    return 0;
}