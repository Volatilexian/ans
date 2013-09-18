#include <iostream>

#include "common.h"

int mast_1_11()
{
    int i = 10;

    cout << "use while: ";
    while(i >= 0)
        cout << i-- << " ";
    cout << endl;

    cout << "use for: ";
    for(i = 10; i >= 0; i--)
        cout << i << " ";
    cout << endl;

    return 0;
}
