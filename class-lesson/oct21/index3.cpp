// 10, 50 ,15, 30, 100, 35
#include <iostream>
using namespace std;
int main(){
    int value[6] = {10, 50, 15, 30, 100, 35};
    int highest = value[0];
    int lowest = value[0];
    for (int i; i<6; i++){
        if (value[i] > highest)
        {
            highest = value[i];
        }
        if (value[i] < lowest)
        {
            lowest = value[i];
        }
    }
    cout <<"Hightest value: "<<highest<<endl;
    cout << "Lowest value: " << lowest << endl;
}