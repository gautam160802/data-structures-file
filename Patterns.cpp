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

// #include <iostream>
// using namespace std;

// void print2(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {

//         int n;
//         cin >> n;

//         print2(n);

//     }
// cout << endl;
//     return 0;
// }
/*
1. for the outer loop, cout the no of lines;
2. for the inner loop, focus on the column, connect them somewhere to the rows;
3. print then "*" inside the inner for loop
4. observe symmetry(optional)
*/
// #include <iostream>
// using namespace std;

// void print3()
// {
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     print3();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void print4()
// {
//     for (int i = 5; i > 0; i--)
//     {

//         for (int j = 0; j < i; j++)
//         {

//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     print4();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void print5(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print5(n);
//     return 0;
// }
