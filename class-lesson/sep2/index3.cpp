#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    double number1;
    double number2;
    double result;
    int operation;
    cout <<"Enter first number: ";
    cin >> number1;
    cout << "Enter second number: " ;
    cin >> number2;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout <<"Choose one opperation: ";
    cin >> operation;
    // The confusion comes down to how C++ views a case label. In a switch statement, a case label is not a boundary—it is simply an entry point (a starting line).
    switch (operation){
        case 1:
            result = number1 + number2;
            cout <<"Result: "<<fixed<<setprecision(2)<<result<<endl;
            break;
        case 2:
            result = number1 - number2;
            cout << "Result: " << fixed << setprecision(2) << result << endl;
            break;
        case 3:
            result = number1 * number2;
            cout << "Result: " << fixed << setprecision(2) << result << endl;
            break;
        case 4:
            result = number1 / number2;
            cout << "Result: " << fixed << setprecision(2) << result << endl;
            break;
        default:
            cout <<"Invalid Operation"<<endl;
    }

    return 0;
}