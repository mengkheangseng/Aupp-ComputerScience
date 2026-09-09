/*

Problem 2
Write a C++ program using a for loop to display all odd numbers from 1 to 19.
Example Output:
1 3 5 7 9 11 13 15 17 19

*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=19; i+= 2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}