#include <iostream>
#include <C:\testi\kirjakooditehtävät\sales_item.h>

int main()
{
    Sales_item yht;
    Sales_item tavara;

    if(std::cin >> yht)
    {
        while(std::cin >> tavara)
        {
            yht += tavara;
            std::cout << yht << std::endl;

        }

    }


    return 0;
}
