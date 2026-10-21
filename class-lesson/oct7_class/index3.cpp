#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    double area();
};
double Circle::area()
{
    return radius * radius * 3.14159;
}
int main()
{
    Circle c1;
    c1.radius = 10;
    cout << "Circle Area: " << c1.area() << endl;

    Circle c2;
    c2.radius = 15;
    cout << "Circle Area: " << c2.area() << endl;
    return 0;
}