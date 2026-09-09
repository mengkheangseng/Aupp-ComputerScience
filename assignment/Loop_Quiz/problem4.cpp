/*

Problem 4 do-while Loop
Write a C++ program using a do-while loop that repeatedly asks the user to enter a positive
number.

If the user enters 0 or a negative number, the program should ask again. The loop should stop
only when the user enters a positive number.
Example Output:
Enter a positive number: -5
Enter a positive number: 0
Enter a positive number: -2
Enter a positive number: 8
Valid number: 8

*/

#include <iostream>
using namespace std;
int main()
{
    double number;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    }
    while (number <= 0);
    cout << "\nValid number: " <<number << endl;
    return 0;
}
