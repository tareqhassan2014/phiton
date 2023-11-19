#include <iostream>
using namespace std;

int main()
{

    // int x;
    // cin >> x;

    // switch (x)
    // {
    // case 1:
    //     cout << "one" << endl;
    //     break;
    // case 2:
    //     cout << "two" << endl;
    //     // break;

    // case 3:
    //     cout << "three" << endl;
    //     break;
    // case 4:
    //     cout << "four" << endl;
    //     break;
    // default:
    //     cout << "kisu mila nai";
    // }

    // akta char vowel ki consonant.

    // char s;
    // cin >> s;

    // switch (s)
    // {
    // case 'a':
    //     cout << "vowel";
    //     break;

    // case 'e':
    //     cout << "vowel";
    //     break;

    // case 'i':
    //     cout << "vowel";
    //     break;

    // case 'o':
    //     cout << "vowel";
    //     break;

    // case 'u':
    //     cout << "vowel";
    //     break;

    // default:
    //     cout << "consonant";
    //     break;
    // }

    // number even na odd.
    int number;
    cin >> number;

    switch (number % 2)
    {
    case 0:
        cout << "even";
        break;

    case 1:
        cout << "odd";
        break;
    }
    return 0;
}
