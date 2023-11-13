#include <iostream>
#include "custom_list.h"

int main()
{
    int n;
    std::cin >> n;
    List list;

    for (int i = 0; i < n; i++)
    {
        list.AddElement(n);
    }
}

