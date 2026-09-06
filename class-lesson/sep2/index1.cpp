#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double hours;
    double pay_rate;
    double regular_pay;
    double overtime_pay;
    double total_payment;
    double overtime;

    cout << "Enter the amount of hour you work: ";
    cin >> hours;
    cout << "Enter hourly pay rate: ";
    cin >> pay_rate;

    cout << "-----------------------"<<endl;
    if (hours <= 40 && hours > 0){
        regular_pay = hours * pay_rate;
        cout << "Total Payment: $" << fixed << setprecision(2) << regular_pay <<endl;
    }
    else if (hours > 40)
    {
        overtime = hours - 40;
        regular_pay = (hours - overtime)  * pay_rate;
        overtime_pay = overtime * pay_rate;
        total_payment = regular_pay + overtime_pay;
        cout << "Regular Payment: $" << fixed << setprecision(2) << regular_pay << endl;
        cout << "Overtime Payment: $" << fixed << setprecision(2) << overtime_pay << endl;
        cout << "Total Payment: $" << fixed << setprecision(2) << regular_pay + overtime_pay <<endl;
    }
    else {
        cout <<"Invalid number of hours"<<endl;
    }
    return 0;
}