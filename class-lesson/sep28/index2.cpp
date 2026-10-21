#include<iostream>
using namespace std;
int main () {
    int age1;
    int age2;
    int temp;
    cout << "Enter age1: ";
    cin >> age1;
    cout << "Enter age2: ";
    cin >> age2;
    cout<<"\n";
    cout <<"Before Swapping age: "<<endl;
    cout <<"age1: "<<age1<<endl;
    cout <<"age2: "<<age2<<endl;
    cout << "\n";

    temp = age1;
    age1 = age2;
    age2 = temp;
    cout << "After Swapping age: " << endl;
    cout << "age1: " << age1 << endl;
    cout << "age2: " << age2 << endl;

    return 0;
}