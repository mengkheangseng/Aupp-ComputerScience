/*
Analysis:
ask the user for the input
if it is under 100 units, 0.5$ per unit
if more than 100 but lower than 200 units, minus 100, the result multiple by 0.5$ the rest time 0.75 per unit
if more than 200, first 100 0.5$ another 100 0.75$ the rest 1$ per unit


IPO
input: unit of electricity used
process: calculate the price
output: the charge amount

Subtask
under 100: units * 0.5
200 < units > 100: units - 100 = x , x * 0.75 + (100 * 0.5 = 50)
units < 200, units - 200 = y, y * 1 + 50 + 75

algorithm
create function for each calculation
ask user for the input
if statement to allocate to the correct function
output the charge


Pseudocode
function lower100 (double units)
    return units * 0.5

function between100_200 (double units)
result = units - 100
    return result * 0.75 + 50

function above200 (double units)
result = units - 200
    return result * 1 + 50 + 75

run program
ask user to input units
using if condition
 if units < 100
    call lower100 function
 elseif 200 < units > 100
    call between100_200
 else
    call above200 function
output the charge price
*/

#include <iostream>
using namespace std;
double lower100(double units){
    return units * 0.5;
}

double between100_200(double units){
    double result = units - 100;
    return (result * 0.75) + 50;
}

double above200(double units){
    double result = units - 200; 
    return (result * 1) + 50 + 75;
}

int main()
{
    while (true){
        double units;
        cout << "Enter the amount of units of electricity used: $";
        cin >> units;

        if (units < 100)
        {
            double result = lower100(units);
            cout << "Charge --> $" << result << endl;
            break;
        }
        else if (units > 100 && units <= 200)
        {
            double result = between100_200(units);
            cout << "Charge --> $" << result << endl;
            break;
        }
        else
        {
            double result = above200(units);
            cout << "Charge --> $" << result << endl;
            break;
        }
    }
}