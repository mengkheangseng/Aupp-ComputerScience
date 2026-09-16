// Write a C++ program that asks the user to enter the lengths of the two shorter sides of a right triangle.A right triangle is a triangle that has one 90 - degree angle.
#include <iostream>
#include <cmath>
using namespace std;

double length_hypo (double length1, double length2)
{
    double hypo = sqrt (pow(length1, 2)+ pow(length2, 2));
    return hypo;
}
int main()
{
    double length1;
    double length2;
    cout <<"Enter a length of a triangle: ";
    cin >> length1;
    cout << "Enter another length of a triangle: ";
    cin >> length2;
    cout << "The hypo length is: " << length_hypo(length1, length2) << endl;

    return 0;
}