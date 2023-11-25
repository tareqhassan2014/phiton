#include <bits/stdc++.h>
using namespace std;

// Function to check if the sum of the first three digits is equal to the sum of the last three digits
bool isLuckyTicket(const string &ticket)
{
    if (ticket.length() != 6)
    {
        // Invalid ticket length
        return false;
    }

    int sumFirstThree = ticket[0] + ticket[1] + ticket[2];
    int sumLastThree = ticket[3] + ticket[4] + ticket[5];

    return sumFirstThree == sumLastThree;
}

int main()
{

    int n;

    cin >> n;

    while (n--)
    {
        string str;

        cin >> str;

        if (isLuckyTicket(str))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}