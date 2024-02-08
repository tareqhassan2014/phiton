#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }

        return a.marks < b.marks;
    }
};

int main()
{

    priority_queue<Student, vector<Student>, Compare> pq;

    int list_length, number_of_query;

    cin >> list_length;

    while (list_length--)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;

        Student s(name, roll, marks);

        pq.push(s);
    }

    cin >> number_of_query;

    while (number_of_query--)
    {
        int command;

        cin >> command;

        if (command == 0)
        {

            string name;
            int roll, marks;

            cin >> name >> roll >> marks;

            Student s(name, roll, marks);

            pq.push(s);

            Student current_max = pq.top();

            cout << current_max.name << " " << current_max.roll << " " << current_max.marks << endl;
        }
        else if (command == 1)
        {

            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {

                Student current_max = pq.top();

                cout << current_max.name << " " << current_max.roll << " " << current_max.marks << endl;
            }
        }
        else if (command == 2)
        {

            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {

                pq.pop();

                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {

                    Student current_max = pq.top();

                    cout << current_max.name << " " << current_max.roll << " " << current_max.marks << endl;
                }
            }
        }
    }

    return 0;
}
