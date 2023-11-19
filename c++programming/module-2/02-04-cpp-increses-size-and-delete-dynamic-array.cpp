#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[3];
    int *brr = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }

    delete[] arr;

    arr = new int[5];

    for (int i = 0; i < 3; i++)
    {
        arr[i] = brr[i];
    }
    delete[] brr;

    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}