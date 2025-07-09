#include <iostream>
using namespace std;

// write a program that takes an input of age and prints if you are adult or not

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "you are an adult" << endl;
    }
    else
    {
        cout << "You are not an adult" << endl;
    }
    return 0;
}
