#include <iostream>

#include "common.h"

int mast_1_18()
{
    int a, b, i;

    cout << "input 2 integers: ";
    cin >> a >> b;

    if(a > b)
    {
        a = a^b;
        b = a^b;
        a = a^b;
    }

    for(i = a; i <= b; i++)
        cout << i;
    cout << endl;

    return 0;
}
