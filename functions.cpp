// #include <iostream>
// using namespace std;

// int sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     return num3;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = max(num1, num2);
//     cout << minimum;

//     return 0;
// }

#include <iostream>
using namespace std;
// pass by reference

void fun(int &num)
{
    cout << num;
    num += 5;
    cout << num;
}
int main()
{
    int num;
    cin >> num;

    fun(num);
    cout << num;

    return 0;
}