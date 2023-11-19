#include <iostream>
#include <string>
using namespace std;

int main()
{
    // array loop print...

    // int n;
    // cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // char print...
    char s[100];

    int n;
    cin >> n;
    getchar();

    cin.getline(s, 100); // space takla use krbo.

    cin >> s;

    cout << n << endl;
    cout << s;

    return 0;
}