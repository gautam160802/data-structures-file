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
        cout << "wednesday";
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
        cout << "sunday" << " ";
        break;
        cout << "you are not going to excute";
    }

    cout << "You are going to excute";
    return 0;
}