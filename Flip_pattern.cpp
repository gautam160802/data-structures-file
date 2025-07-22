// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     int start = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//             start = 1;
//         else
//             start = 0;

//         for (int j = 0; j <= i; j++)
//         {

//             cout << start;
//             start = 1 - start;

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
//     int space = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
//     {
//         // numbers
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         // space
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }

//         // numbers
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//         space -= 2;
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

// int start = 1;
// void print(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << start << " ";
//             start++;
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

// int start = 1;
// void print(int n)
// {
//     for (int i = n; i > 0; i--)
//     {
//         for (char ch = 'A'; ch < 'A' + i; ch++)
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

#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch;
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
