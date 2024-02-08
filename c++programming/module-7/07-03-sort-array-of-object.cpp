#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;

    student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // assending order
            // if (ar[i].marks > ar[j].marks)
            //     swap(ar[i], ar[j]);
            if (ar[i].marks < ar[j].marks)
                swap(ar[i], ar[j]);
            if (ar[i].marks == ar[j].marks)
            {
                if (ar[i].roll > ar[j].roll)
                    swap(ar[i], ar[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }

    return 0;
}