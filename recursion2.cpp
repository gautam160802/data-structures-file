// printing the names n times using recursion

// #include <iostream>
// using namespace std;

// void print1(int i, int n)
// {

//     if (i > n)
//     {
//         return;
//     }
//     cout << "gautam" << endl;

//     print1(i + 1, n);
// }

// int main()
// {

//     int n;
//     cin >> n;

//     print1(1, n);
//     return 0;
// }

// print (1 -n) linearly using recursion

#include <iostream>
using namespace std;

void print(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << i << endl;

    print(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    print(1, n);

    return 0;
}