#include <iostream>
using namespace std;

int main()
{
    string s = "Gautam";
    int len = s.size();
    s[len - 1] = 'z';
    cout << s[len - 1];

    return 0;
}