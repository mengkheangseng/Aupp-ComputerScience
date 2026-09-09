/* 

Problem 1
Write a C++ program that uses a for loop to display the numbers from 20 down to 1. .
Example Output:
20 19 18 17 ………1 

*/

#include <iostream>
using namespace std;
int main () {
    for (int i= 20; i >= 1; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}