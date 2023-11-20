#include <iostream>
#include "custom_list.h"

int main()
{
    int n;
    std::cin >> n;
    List list;

    for (int i = 0; i < n; i++)
    {
        list.AddElement(i * n + i * i);
    }

    int x;
    std::cin >> x >>std::endl;
    list.GetByIndex(x);
    int v;
    std::cin >> v >>std::endl;
    list.RemoveElement(v);

}

