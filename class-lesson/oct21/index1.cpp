#include<iostream>
using namespace std;
int main () {
    int num[6]={1, 6, 3, 5, 9, 8};
    for (int i: num){
        cout <<i<<" ";
    }
    cout <<endl;
    for (int i : num){
        if (i % 2 == 0){
            cout << i<< " ";
        }
    }
    cout << endl;
    return 0;
}