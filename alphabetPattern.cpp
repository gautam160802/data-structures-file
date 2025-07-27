// #include <iostream>
// using namespace std;

// int start = 1;
// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
//         {
//             cout << ch << " ";
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
// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch << " ";
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

// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;

//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
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

// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         // characters
//         char ch = 'A';
//         int breakpont = (2 * i + 1) / 2;
//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ch;
//             if (j <= breakpont)
//                 ch++;
//             else
//                 ch--;
//         }

//         for (int j = 0; j <= n - i - 1; j++)
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

#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
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