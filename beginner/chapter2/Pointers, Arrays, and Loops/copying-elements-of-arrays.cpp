#include <iostream>

void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,9};
    int v2[10];

    for (auto i = 0; i != 10; i++)
    {
	v2[i] = v1[i];
    }
}

