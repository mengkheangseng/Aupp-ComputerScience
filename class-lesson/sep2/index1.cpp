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

    cout << "Enter the amount of hour you work: " << endl;
    cin >> hours;
    cout << "Enter hourly pay rate: "<<endl;
    cin >> pay_rate;

    cout << "-----------------------"<<endl;
    if (hours <= 40 && hours > 0){
        regular_pay = hours * pay_rate;
        cout << "Total Payment: " << regular_pay << setprecision(2);
    }
    if (hours > 40)
    {
        overtime = hours - 40;
        regular_pay = (hours - overtime)  * pay_rate;
        overtime_pay = overtime * pay_rate;
        total_payment = regular_pay + overtime_pay;
        cout << "Total Payment: " << regular_pay << setprecision(2);
    }
    else {
        cout <<"Invalid number of hours"<<endl;
    }
    return 0;
}