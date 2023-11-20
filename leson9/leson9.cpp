#include <iostream>
#include "custom_list.h"

int main()
{
    int n;
    std::cin >> n;
    int index_list[n];
    List list;

    for (int i = 0; i < n; i++)
    {
        list.AddElement(n, i, index_list);
    }

    int x;
    std::cin >> x >> endl;

    if (x == int)
    {
        list.GetByIndex(x, index_list);
    }
}

