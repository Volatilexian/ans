#include <iostream>

#include "common.h"

int mast_1_10()
{
    int sum = 0, i;

    for(i = 50; i <= 100; i++)
        sum += i;
    cout << "use for, the result is " << sum << endl;

    sum = 0;
    i = 50;
    while(i <= 100)
        sum += i++;
    cout << "use while, the reslut is " << sum << endl;

    return 0;
}
