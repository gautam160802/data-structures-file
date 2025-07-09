#include <iostream>
using namespace std;

int main()
{

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wedday";
        break;
    case 4:
        cout << "thrusday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;

    default:
        cout << "sunday";
        break;
    }
    return 0;
}