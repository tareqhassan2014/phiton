#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;

    getline(cin, str);

    int count = 0;
    bool new_word = false;

    for (char c : str)
    {

        if (isalpha(c))
        {
            if (!new_word)
            {
                count++;
                new_word == true;
            }
        }
        else
        {
            new_word == false;
        }
    }

    cout << count << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count = 0;
    bool new_word = false;

    for (char c : str)
    {
        if (isalpha(c))
        {
            if (!new_word)
            {
                count++;
                new_word = true;
            }
        }
        else
        {
            new_word = false;
        }
    }

    cout << count << endl;

    return 0;
}
 */