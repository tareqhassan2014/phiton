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

    // int n;
    // cin >> n;
    // student arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << " " << endl;
    // }

    // name moddo space takba
    int n;
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)

    {
        getchar();
        // or cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << " " << endl;
    }
    return 0;
}