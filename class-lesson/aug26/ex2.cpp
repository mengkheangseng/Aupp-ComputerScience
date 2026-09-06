#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int apple;
    int banana;
    int milk;

    cout << "Enter the number of Apple: ";
    cin >> apple;

    cout << "Enter the number of Banana: ";
    cin >> banana;

    cout << "Enter the number of Milk: "; 
    cin >> milk;

    double total_apple = (apple * 1.25);
    double total_banana = (banana * 0.75);
    double total_milk = (milk * 2.5);
    double grand_total = total_apple + total_banana + total_milk;

    cout << fixed << setprecision(2);
    cout << "Apple total: " << total_apple << endl;
    cout << "Banana total: " << total_banana << endl;
    cout << "Milk total: " << total_milk << endl;
    cout << "Grand total: " << grand_total << endl;

    return 0;
}