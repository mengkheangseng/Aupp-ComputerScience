#include <iostream>
using namespace std;
double radius(double a){
    return a/2;
}
double area(double r){
    return 3.14 * r * r;
}
double price_per_square(double area1, double price1){
    return area1 / price1;
}
int main () {
    double diameter;
    double price;
    cout <<"Enter Diameter: ";
    cin >> diameter;
    cout << "The radius of the pizza: "<<radius(diameter)<<endl;

    double r = radius(diameter);
    double area1 = area(r);
    cout << "The area of the pizza: " << area(diameter) << endl;

    cout << "Enter price: ";
    cin >> price;
    cout << "The price per square unit: " << price_per_square(area1, price) << endl;
}