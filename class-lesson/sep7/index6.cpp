#include <iostream>
using namespace std;
int main (){
    int sum = 0;
    int i =1;
    while (i<= 10){
        sum += i;
        i++;
    }
    cout << "Total of sum from 1 to 10: "<< sum <<endl;
    return 0;
}