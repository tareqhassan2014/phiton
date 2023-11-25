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
    student arr[n];

    // student mn;
    // mn.marks = INT_MAX;
    student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        // if (arr[i].marks < mn.marks)
        //     mn = arr[i];
        if (arr[i].marks > mx.marks)
            mx = arr[i];
    }
    // cout << mn.name << " " << mn.roll << " " << mn.marks << " ";
    cout << mx.name << " " << mx.roll << " " << mx.marks << " ";
    return 0;
}