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
    int *p = fun();
    for (int i = 0; i < 3; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}