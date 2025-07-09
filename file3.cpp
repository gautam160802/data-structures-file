#include <iostream>

using namespace std;

int main()
{

    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "not eligible for the job";
    }
    else if (age <= 54)
    {
        cout << "eligible for the job";
    }

    else if (age <= 57)
    {
        cout << " eligible for the job but retirement soon.";
    }
    else
    {
        cout << "reteirement time";
    }

    return 0;
}