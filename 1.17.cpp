#include <iostream>

#include "common.h"

int mast_1_17()
{
    int tmp;
    int cnt = 0;

    cout << "input the integers: ";
    while(cin >> tmp)
        if(tmp < 0)
            cnt++;
    cout << "there has " << cnt << " negative integers" << endl;

    return 0;
}
