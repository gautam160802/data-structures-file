// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     print(n);

//     return 0;
// }
// reverse the pattern

// #include <iostream>
// using namespace std;
// void print1(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void print2(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     print1(n);
//     print2(n);

//     return 0;
// }

// nested for loops pattern

#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)

        {
            stars = 2 * n - i;
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    print(n);

    return 0;
}

// completed upto pattern 10 @ 39: 24
