#include<iostream>
using namespace std;

void displayGrade(int grade){
    if (grade >= 90 && grade <100){
        cout << "You recieve grade 'A'"<<endl;
    }
    else if (grade >= 80 && grade < 90)
    {
        cout << "You recieve grade 'B'"<<endl;
    }
    else if (grade >= 70 && grade < 80)
    {
        cout << "You recieve grade 'C'"<<endl;
    }
    else if (grade >= 60 && grade < 70)
    {
        cout << "You recieve grade 'D'"<<endl;
    }
    else
    {
        cout << "You recieve grade 'F'"<<endl;
    }
}
int main() {
    int score;
    cout<<"Enter student score from 0-100: ";
    cin >>score;
    displayGrade(score);
    return 0;
}

