#include <iostream>
using namespace std;
int cnt = 0;
void print(int n)
{

    if (cnt == 4)
    {
        return;
    }
    cout << cnt << endl;
    cnt++;
    print(n);
}

int main()
{

    int n;
    cin >> n;

    print(n);
    return 0;
}