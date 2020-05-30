#include <iostream>


int main()
{
    int val = 0;
    int val2 = 0;

    std::cout << "anna aloitus numero: ";
    std::cin >> val;
    std::cout << "anna lopetus numero: ";
    std::cin >> val2;


        while(val <= val2)
        {
            std::cout << val++;
            std::cout << std::endl;

        }


    return 0;
}
