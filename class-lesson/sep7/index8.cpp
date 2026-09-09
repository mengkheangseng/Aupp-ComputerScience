#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int number = 1;
    do {
        sum = sum + number;
        number++;
    }
    while (number <= 100);
    cout << "Total: "<< sum <<endl;
    return 0;
}

//  A do-while loop differs from while and for loops because it executes the code block first and checks the condition afterward, guaranteeing at least one execution. In contrast, while and for loops check the condition first; if it evaluates to false, the code inside will never run.