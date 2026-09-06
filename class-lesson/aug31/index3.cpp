#include <iostream>
using namespace std;
int main (){
    double score;
    cout << "Enter your score: ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid score."<<endl;
    }
    else if (score >= 90)
    {
        cout << "Grade: A" <<endl;
    }
    else if (score >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (score >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "You are fail.";
    }
    return 0;
}