#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string student_name;
    int student_class;
    char student_session;
    int student_id;
    int math_marks;
    int eng_marks;
};

bool compare_function(Student first_student, Student last_student)
{
    int first_student_total_mark = first_student.eng_marks + first_student.math_marks;
    int last_student_total_mark = last_student.eng_marks + last_student.math_marks;

    if (first_student_total_mark == last_student_total_mark)
    {
        return first_student.student_id < last_student.student_id;
    }
    else
    {
        return first_student_total_mark > last_student_total_mark;
    }
}

int main()
{

    int N;

    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].student_name >> students[i].student_class >> students[i].student_session >> students[i].student_id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, compare_function);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].student_name << " " << students[i].student_class << " " << students[i].student_session << " " << students[i].student_id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}