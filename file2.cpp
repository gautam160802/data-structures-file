// A school has following rule for grading systems:

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "your grade is F" << endl;
    }

    else if (26 >= marks <= 44)
    {
        cout << "Your grade is E" << endl;
    }
    else if (marks >= 45 && marks < 49)
    {
        cout << "Your grade is D" << endl;
    }
    else
    {
        cout << " You are topper " << endl;
    }

    return 0;
}