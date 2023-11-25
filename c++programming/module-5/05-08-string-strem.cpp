#include <bits/stdc++.h>
using namespace std;

int main()
{
    // print each word
    // string a;
    // getline(cin, a);
    // stringstream ss(a);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    // print each word count
    string a;
    getline(cin, a);
    stringstream ss(a);
    string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}