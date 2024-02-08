#include <bits/stdc++.h>
using namespace std;

int main()
{

    int length;
    cin >> length;

    int array[length];

    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    int value;
    cin >> value;

    int l = 0;
    int r = length - 1;

    bool flag = false;

    while (l <= r)
    {
        int mid_index = l + r / 2;
        if (array[mid_index] == value)
        {
            flag = true;
            break;
        }

        if (value > array[mid_index])
        {
            l = mid_index + 1;
        }
        else
        {
            r = mid_index - 1;
        }
    }

    if (flag == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
