// #include <iostream>
// using namespace std;

// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 15; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     print1(n);

//     return 0;
// }

#include <iostream>
using namespace std;

void print2()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{

    print2();

    return 0;
}