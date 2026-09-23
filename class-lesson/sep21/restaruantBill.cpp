#include <iostream>
using namespace std;

double calculateTax(double mealPrice)
{
    return mealPrice * 0.08;
}

double calculateTip(double mealPrice, int tipPercent)
{
    return mealPrice * tipPercent / 100.0;
}

double calculateTotal(double mealPrice, double tax, double tip)
{
    return mealPrice + tax + tip;
}

double calculatePerPerson(double total, int numPeople)
{
    if (numPeople <= 0)
        return 0; 
    return total / numPeople;
}

int main()
{
    double mealPrice = -1;
    int tipPercent = -1;
    int numPeople = -1;

    while (mealPrice < 0 || tipPercent < 0 || numPeople <= 0)
    {
        cout << "Enter the meal price: ";
        cin >> mealPrice;
        if (mealPrice < 0)
        {
            cout << "Meal price cannot be negative. Try again.\n";
            continue;
        }

        cout << "Enter the tip amount in percent: ";
        cin >> tipPercent;
        if (tipPercent < 0)
        {
            cout << "Tip percent cannot be negative. Try again.\n";
            continue;
        }

        cout << "Enter the amount of people: ";
        cin >> numPeople;
        if (numPeople <= 0)
        {
            cout << "Number of people must be at least 1. Try again.\n";
        }
    }

    double tax = calculateTax(mealPrice);
    double tip = calculateTip(mealPrice, tipPercent);
    double total = calculateTotal(mealPrice, tax, tip);
    double perPerson = calculatePerPerson(total, numPeople);

    cout << "\n--- Bill Summary ---\n";
    cout << "Tax: " << tax << endl;
    cout << "Tip: " << tip << endl; 
    cout << "Total: " << total << endl;
    cout << "Cost per person: " << perPerson << endl;

    return 0;
}