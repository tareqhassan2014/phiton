#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;

    cin >> test_cases;

    cin.ignore();

    while (test_cases--)
    {
        string sentence;

        getline(cin, sentence);

        if (sentence.empty())
            continue;

        string word;
        stringstream ss(sentence);

        map<string, int> word_count;

        int max_frequency = 0;

        string most_frequent_word = "";

        while (ss >> word)
        {
            word_count[word]++;

            if (word_count[word] > max_frequency)
            {
                max_frequency = word_count[word];
                most_frequent_word = word;
            }
        }

        cout << most_frequent_word << " " << max_frequency << endl;
    }

    return 0;
}
