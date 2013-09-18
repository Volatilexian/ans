#include <iostream>

#include "common.h"

int mast_1_16()
{
    int a, b, c;

    cout << "input two integers: ";
    cin >> a >> b;
    c = (a > b) ? a : b;
    cout << "the max is " << c << endl;

    return 0;
}
