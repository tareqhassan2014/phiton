#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mn = min({a, b, c});
    int mx = max({a, b, c});

    cout << mn << " " << mx;

    return 0;
}