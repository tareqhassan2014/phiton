#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < number - 1; i++)
    {
        for (int j = i + 1; i < number; i++)
        {
            swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < number; i++)
    {
        if (i == number - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}