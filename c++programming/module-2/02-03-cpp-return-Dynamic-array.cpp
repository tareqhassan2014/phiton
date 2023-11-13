#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int arr[3];//static array
    int *arr = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int *arr = fun();
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}