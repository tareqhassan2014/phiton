#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char sesson;
    int id;
    int math_marks;
    int eng_marks;
};
bool compair(student a, student b)
{
    if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks == b.math_marks)
        {
            return a.id < b.id;
        }
        else
        {
            return a.math_marks > b.math_marks;
        }
    }

    else
    {
        return a.eng_marks > b.eng_marks;
    }
}

int main()
{

    int input_number;
    cin >> input_number;

    student arr[input_number];

    for (int i = 0; i < input_number; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sesson >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + input_number, compair);
    for (int i = 0; i < input_number; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sesson << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << " " << endl;
    }

    return 0;
}