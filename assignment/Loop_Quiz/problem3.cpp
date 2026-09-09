/*

Problem 3 while Loop
Write a C++ program using a while loop that asks the user to enter 5 numbers. The program
should calculate and display the total of those numbers.
Example Output:
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 15
Enter number 5: 10
Total = 60

*/

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    double number;
    double sum;
    while (i <= 5){
        cout << "Enter number "<<i << ": ";
        cin >> number;
        sum += number;
        i++;
    }
    cout << "Total = "<< sum <<endl;
    return 0;
}