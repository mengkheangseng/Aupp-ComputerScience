// #include <iostream>
// using namespace std;  //naming conflict

// int main()
// {
//     cout << "Hello, World!" << std::endl;
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    double number1 , number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Addition: " << number1 + number2 << endl;
    cout << "Substraction: " << number1 - number2 << endl;
    cout << "Multiplication: " << number1 * number2 << endl;
    cout << "Division: " << number1 / number2 << endl;
    return 0;

}