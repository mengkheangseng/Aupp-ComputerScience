#include <iostream>
using namespace std;
int main()
{
    double weight;
    cout << "Enter package weight in pounds: ";
    cin >> weight;

    if (weight <= 0)
    {
        cout << "Invalid Weight" << endl;
    }
    else if (weight > 0 && weight <= 2)
    {
        cout << "Shopping cost: " << "$5" << endl;
    }
    else if (weight > 2 && weight <= 5)
    {
        cout << "Shopping cost: " << "$8" << endl;
    }
    else if (weight > 5 && weight <= 10)
    {
        cout << "Shopping cost: " << "$12" << endl;
    }
    else
    {
        cout << "Shopping cost: " << "$20" << endl;
    }
    return 0;
}