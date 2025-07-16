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

// #include <iostream>
// using namespace std;

// void print(int i, int n)
// {

//     if (i > n)
//     {
//         return;
//     }
//     cout << i << endl;

//     print(i + 1, n);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     print(1, n);

//     return 0;
// }

// print (n - 1) linearly using recursion
// #include <iostream>
// using namespace std;

// void print(int i, int n)
// {

//     if (i < 1)
//     {
//         return;
//     }
//     print(i - 1, n);
//     cout << i << endl;
// }

// int main()
// {

//     int n;
//     cin >> n;
//     print(n, n);
//     return 0;
// }

// print (n - 1) without i-1;

// i

#include <iostream>
using namespace std;

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }

    print(i + 1, n);
    cout << i << endl;
}

int main()
{

    int n;
    cin >> n;

    print(1, n);
    return 0;
}