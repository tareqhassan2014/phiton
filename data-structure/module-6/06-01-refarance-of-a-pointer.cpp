#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    // *p = 20;//main ar value man 20 hoba.
    p = NULL;
}

int main()
{

    int value = 10;
    int *ptr = &value;
    fun(ptr);
    // cout << value;
    // cout << *ptr << endl; // value print hoba.
    cout << ptr; // addres print hoba. //p=null hola pka difarance korla ptr=0 hoba.

    return 0;
}
