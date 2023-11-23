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

    
    list.FillRand(n);
    
    int x;
    std::cin >> x;
    std::cout << list.GetByIndex(x) << std::endl;
    int v;
    std::cin >> v;
    list.RemoveElement(v);

}

