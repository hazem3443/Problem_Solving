#include <Add/add.h>
#include <iostream>

extern int isAddTriggeredBefore;

int* add(int *a, int b)
{
    return a + b;
}

bool AddTriggeredBefore()
{
    return (isAddTriggeredBefore == 0);
}