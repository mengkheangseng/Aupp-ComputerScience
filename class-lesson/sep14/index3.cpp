// A circle has a radius of 5 meters.Find its area

#include <iostream>
#include <cmath>
using namespace std;

void area_of_circle(double r)
{
    double area = 3.14 * pow(r, 2);
    cout << "Area of the circle: " << area << endl;
}
int main () {
    double radius = 5.0;
    area_of_circle(radius); 
    return 0;
}