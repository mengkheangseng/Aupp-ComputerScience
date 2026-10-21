#include <iostream>
using namespace std;
int main()
{

    int price[5] = {};
    cout << "Enter 5 product prices: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Product price " << i + 1 << " :";
        cin >> price[i];
    }
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += price[i];
    }
    double average = sum / 5;
    int highest = price[0];
    int lowest = price[0];
    for (int i = 0; i < 5; i++)
    {
        if (price[i] > highest)
        {
            highest = price[i];
        }
        if (price[i] < lowest)
        {
            lowest = price[i];
        }
    }
    cout << "\nAverage price: " << average << endl;
    cout << "Hightest price: " << highest << endl;
    cout << "Lowest price: " << lowest << endl;
}

// #include <iostream>
// using namespace std;
// int main()
// {

//     int price[5] = {90, 150, 135, 123, 97};
//     int highest = price[0];
//     int lowest = price[0];
//     for (int i; i < 5; i++)
//     {
//         if (price[i] > highest)
//         {
//             highest = price[i];
//         }
//         if (price[i] < lowest)
//         {
//             lowest = price[i];
//         }
//     }
//     cout << "Hightest price: " << highest << endl;
//     cout << "Lowest price: " << lowest << endl;
// }