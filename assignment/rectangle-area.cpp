//Homework: Calculate the Area of a Rectangle Using a Function

/* 
Write a C++ program that creates a function named calculateArea(). 

The function should receive the length and width of a rectangle and return the area.

Formula : Area = Length×WidthArea = Length \times Width
    
Example Input
        
Enter length : 10 
Enter width : 5 

Example Output
            
Area of the rectangle = 50 

Requirements 
1. Ask the user to enter the length and width.
2. Create a function named calculateArea().
3. Pass length and width to the function.
4. Calculate the area inside the function.
5. Return the area.
6. Call the function from main().
7. Display the result. 
*/

#include <iostream>
#include <cmath>
                                                                                                                                                                using namespace std;

double calculateArea(double length, double width)
{
    double area = length * width;
    return area;
}
int main()
{
    double length;
    double width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Area of the triangle = " << calculateArea(length, width) << endl;

    return 0;
}