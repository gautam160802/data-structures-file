// hashing
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;

//         cout << hash[number] << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // pre compute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    int q;
    cin >> q;

    while (q--)
    {
        char c;
        cin >> c;

        // fetch
        cout << hash[c] << endl;
    }

    return 0;
}