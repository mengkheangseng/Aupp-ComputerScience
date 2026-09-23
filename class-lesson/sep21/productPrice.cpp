#include <iostream>

using namespace std;

double calculateTotal(double price, int quantity){
    return price * quantity;
}

int main()
{
    double price1, price2;
    int quantity1, quantity2;
    double total1, total2, grandTotal;

    cout <<"\n";
    cout << "=========== Product 1 ===========" << endl;
    cout << "Enter the price of Product (1): ";
    cin >> price1;
    cout << "Enter the quantity of Product (1): ";
    cin >> quantity1;

    total1 = calculateTotal(price1, quantity1);
    cout << "The total cost of Product (1) is: $" << total1 << endl
         << endl;

    cout << "=========== Product 2 ===========" << endl;
    cout << "Enter the price of Product (2): ";
    cin >> price2;
    cout << "Enter the quantity of Product (2): ";
    cin >> quantity2;

    total2 = calculateTotal(price2, quantity2);
    cout << "The total cost of Product (2) is: $" << total2 << endl;
    cout << "\n";

    grandTotal = total1 + total2;

    cout << "============Receipt============" << endl;
    cout << "Total cost of Product (1): $" << total1 << endl;
    cout << "Total cost of Product (2): $" << total2 << endl;
    cout << "Total cost of both products: $" << grandTotal << endl;
    return 0;
}