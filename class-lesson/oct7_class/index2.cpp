#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int monthlySalary;
    int annualSalary();
};
int Employee::annualSalary()
{
    return monthlySalary * 12;
}
int main()
{
    Employee e1;
    e1.name = "Jonh";
    e1.monthlySalary = 2000;
    cout << "Annaul Salary: " << e1.annualSalary()<<endl;

    Employee e2;
    e2.name = "Sam";
    e2.monthlySalary = 2400;
    cout << "Annaul Salary: " << e2.annualSalary()<< endl;
    return 0;
}
