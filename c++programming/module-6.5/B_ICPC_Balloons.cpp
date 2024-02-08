#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> balloons(26, 0);

        for (char c : s)
        {
            balloons[c - 'A']++;
        }

        int totalBalloons = 0;
        int extraBalloons = 0;

        for (int i = 0; i < 26; i++)
        {
            if (balloons[i] > 0)
            {
                totalBalloons += 1; // Balloon for solving the problem

                if (extraBalloons == 0)
                {
                    extraBalloons = 1; // Extra balloon for the first team
                }

                totalBalloons += min(balloons[i] - 1, extraBalloons);
            }
        }

        cout << totalBalloons << endl;
    }

    return 0;
}