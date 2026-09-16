// #include <iostream>
// using namespace std;
// int area_rectangle (int a, int b){
//     return a*b;
// }
// int main () {
//     int length1;
//     int width1;
//     int length2;
//     int width2;
//     int length3;
//     int width3;
//     cout <<"Enter the length of Reectangle: ";
//     cin >> length1;
//     cout <<"Enter the width of Rectangle: ";
//     cin >> width1;
//     int area1 = area_rectangle(length1, width1);
//     cout <<"Area of the rectangle: "<<area1 << endl;

//     cout << "Enter the length of Reectangle: ";
//     cin >> length2;
//     cout << "Enter the width of Rectangle: ";
//     cin >> width2;
//     int area2 = area_rectangle(length2, width2);
//     cout << "Area of the rectangle: " << area2 << endl;

//     cout << "Enter the length of Reectangle: ";
//     cin >> length3;
//     cout << "Enter the width of Rectangle: ";
//     cin >> width3;
//     int area3 = area_rectangle(length3, width3);
//     cout << "Area of the rectangle: " << area3 << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int area_rectangle(int a, int b)
{
    return a * b;
}

int main()
{
    int length;
    int width;

    // Standard C++ for loop syntax: (initialization; condition; increment)
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the length of Rectangle: ";
        cin >> length;
        cout << "Enter the width of Rectangle: ";
        cin >> width;

        int area = area_rectangle(length, width);
        cout << "Area of the rectangle: " << area << endl;
    }

    return 0;
}