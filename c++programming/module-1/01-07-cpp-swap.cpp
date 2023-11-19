#include <iostream>
#include <algorithm>
using namespace std;
#include <utility>

// void swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     swap(&a, &b);
//     cout << a << " " << b;
// }

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
}