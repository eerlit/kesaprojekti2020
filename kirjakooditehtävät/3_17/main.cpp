#include <iostream>
#include <vector>



int main()
{
    std::string x;
    std::vector<std::string> lista;

    std::cout << "anna merkkijono: ";
    std::getline(std::cin, x);

    for(auto &c : x)
    {
        c = toupper(c);
    }
    lista.push_back(x);


    for(auto f : lista)
    {
        std::cout << f;
    }



    return 0;
}
