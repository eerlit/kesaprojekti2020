#include <iostream>



int main()
{
   std::string merkkijono;

    std::cout << "anna merkkijono: ";
    std::getline(std::cin, merkkijono);

    for(auto &c : merkkijono)
    {
        if(!ispunct(c))
        {
    std::cout << c;
        }

    }



    return 0;
}
