#include <bits/stdc++.h>
using namespace std;

vector<int> concatenate(vector<int> &a, vector<int> &b)
{
    vector<int> result(b.begin(), b.end());

    result.insert(result.end(), a.begin(), a.end());

    return result;
}

int main()
{

    int length;
    cin >> length;

    vector<int> a, b;

    for (int i = 0; i < length; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }

    for (int i = 0; i < length; i++)
    {
        int input;
        cin >> input;
        b.push_back(input);
    }

    vector<int> c = concatenate(a, b);

    for (int i : c)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
