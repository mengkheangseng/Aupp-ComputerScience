#include <iostream>
using namespace std;

int main()
{
    int student_grade[5] = {98, 87, 79, 92, 95};
    for (int i : student_grade)
    {
        cout<<i<<" ";
    }
    cout <<endl;

        // Traditional loop using index 'i'
        for (int i = 0; i < 5; i++)
        {
            student_grade[i] += 5;
            cout << student_grade[i] << " ";
        }
        cout << endl;

        return 0;
    }

// #include <iostream>
// using namespace std;
// int main (){
//     int student_grade[5]= {
//         98, 87, 79, 92, 95
//     };
//     for (int i : student_grade){
//         cout<<i<<" ";
//     }
//     cout <<endl;
//     for (int& i : student_grade)
//     {
//         i += 5;
//         cout << i << " ";
//     }
//     cout << endl;
// }