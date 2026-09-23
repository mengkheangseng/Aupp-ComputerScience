#include<iostream>
using namespace std;

double calculateTax (double mealPrice){
    return mealPrice * 0.08;
}

double calculateTip (double mealPrice, int tipPercent){
    return mealPrice * tipPercent /100;
}

double calculateTotal (double mealPrice, double tax, double tip){
    return mealPrice + tax + tip;
}
double calculatePerPerson (double total, int numPeople){
    return total/numPeople;
}

int main()
{
    double mealPrice;
    int tipPercent;
    int numPeople;
    cout <<  "Enter the meal price: ";
    cin >> mealPrice;

    double tax = calculateTax(mealPrice);

    cout << "Enter the tip amount in percent: ";
    cin >> tipPercent;
    double tip = calculateTip(mealPrice, tipPercent);
    double total = calculateTotal (mealPrice, tax, tip);

    cout << "Enter the amount of people: ";
    cin >> numPeople;
    double perPerson = calculatePerPerson(total, numPeople);

    cout << "Tip: "<< tax <<endl;
    cout << "Total: "<< total<< endl;
    cout << "Cost per person: "<<perPerson<< endl;

    return 0;
}