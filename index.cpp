#include<iostream>
#include<fstream>
using namespace std;
int main (){
    ofstream outFile;
    outFile.open("student.txt", ios::app);
    char choice;
    while (true){
        cout <<"Enter your first name: ";
        string firstname;
        cin>>firstname;
        outFile << firstname << endl;
        cout << "Do you want to enter another name? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    }
    outFile << "--Student Information saved successfully--"<<endl;
    outFile.close();
    return 0;
}