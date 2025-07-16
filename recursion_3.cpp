// summation of 1st n number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;

//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     cout << sum << endl;

//     return 0;
// }
// using recursion;

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);

    return 0;
}