/*
Author: Mengkheang Seng #2025422
Date: 26 August 2026
Description: This program calculates the total monetary value of inserted quarters, dimes, and nickels in both cents and dollars.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quarters = 0, dimes = 0, nickels = 0;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of nickels: ";
    cin >> nickels;

    while (quarters < 0 || dimes < 0 || nickels < 0)
    {
        cout << "Invalid input. All values must be non-negative. Try again.\n\n";

        cout << "Enter the number of quarters: ";
        cin >> quarters;

        cout << "Enter the number of dimes: ";
        cin >> dimes;

        cout << "Enter the number of nickels: ";
        cin >> nickels;
    }

    // Calculate total in cents: quarters (25), dimes (10), nickels (5)
    int totalCents = (quarters * 25) + (dimes * 10) + (nickels * 5);

    // Calculate total in dollars
    double totalDollars = totalCents / 100.0;

    // Display the output formatted to match the requirements
    cout << fixed << setprecision(2);
    // fixed-point notation instead of scientific notation (e.g., it prints 1.20 instead of 1.2e+00).

    // setprecision(2): Tells C++ to display 2 digits after the decimal point.

    cout << "The total value is: " << totalCents << " cents or $" << totalDollars << "\n";

    return 0;
};
