#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<string> link_list;

    string input_string;

    while (cin >> input_string)
    {
        if (input_string == "end")
        {
            break;
        }

        link_list.push_back(input_string);
    }

    int test_case;
    cin >> test_case;

    auto current = link_list.begin();

    string s1, s2;

    while (test_case--)
    {
        cin >> s1;

        if (s1 == "visit")
        {
            cin >> s2;

            current = find(link_list.begin(), link_list.end(), s2);

            if (current == link_list.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *current << endl;
            }
        }

        else if (s1 == "prev")
        {
            if (current == link_list.begin())
                cout << "Not Available" << endl;
            else
            {
                current--;
                cout << *current << endl;
            }
        }
        else if (s1 == "next")
        {
            if (current == link_list.end())
                cout << "Not Available" << endl;
            else
            {
                current++;
                cout << *current << endl;
            }
        }

        /*
         else if (s1 == "next")
        {

            if (current == link_list.end())
                cout << "Not Available" << endl;
            else
            {
                current++;
            }

            current++;

            if (current == link_list.end())
            {
                current--;
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *current << endl;
            }
        }
         */
    }

    return 0;
}
