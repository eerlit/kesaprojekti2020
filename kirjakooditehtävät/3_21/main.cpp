#include <iostream>
#include <vector>

void TulostaIntVektori(const std::vector<int> &kasa){

    for(auto it = kasa.cbegin(); it != kasa.cend(); it++)
    {
        std::cout << *it << " ";
        std::cout << std::endl;

    }
}

void TulostaStringVektori(const std::vector<std::string> &merkkijono){

    for(auto it = kasa.cbegin(); it != kasa.cend(); it++)
    {
        std::cout << *it << " ";
        std::cout << std::endl;

    }
}


int main()
{

    std::vector<int> kasa(10, 42);
    std::vector<std::string> merkkijono(10, "hoi");

    TulostaIntVektori(kasa);
    tulostaStringVektori(merkkijono);






    return 0;
}
