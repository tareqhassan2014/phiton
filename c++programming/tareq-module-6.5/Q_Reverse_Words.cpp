#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;

    getline(cin, str);

    stringstream str_stream(str);

    string word;

    bool firstWord = true;

    while (str_stream >> word)
    {

        if (!firstWord)
        {
            cout << " ";
        }

        reverse(word.begin(), word.end());
        cout << word;

        firstWord = false;
    }

    return 0;
}