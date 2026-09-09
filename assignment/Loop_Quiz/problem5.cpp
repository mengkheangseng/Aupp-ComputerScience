/*

Problem : while Loop (Extra point)
Write a C++ program using a while loop that asks the user to enter 10 integers.
The program should:
● Count how many numbers are positive.
● Count how many numbers are negative.
● Count how many numbers are zero.
● Display all three counts at the end.
Example Output:
Enter number 1: 5
Enter number 2: -3
Enter number 3: 0
Enter number 4: 8
Enter number 5: -2
Enter number 6: 10
Enter number 7: 0
Enter number 8: -7
Enter number 9: 4
Enter number 10: 6
Positive numbers = 5
Negative numbers = 3
Zero values = 2

*/

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int positive = 0;
    int negative = 0;
    int zero= 0;
    int number;
    while (i <=10){
        cout << "Enter number "<< i << ": ";
        cin >> number;
        i++;
        if (number == 0){
            zero += 1;
        }
        else if (number > 0){
            positive +=1;
        }
        else {
            negative += 1;
        }

    }
    cout << "\nPositive number = "<< positive <<endl;
    cout << "Negative number = "<<negative <<endl;
    cout << "Zero values = " <<zero<< endl;
    return 0;
}