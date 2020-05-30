#include <iostream>
#include <vector>


int main()
{

    int arvo1;
   std::vector<int> vektori1{};
    while(std::cin >> arvo1)
    {
        vektori1.push_back(arvo1);
    }
    std::cout << vektori1.size();
    for(auto d: vektori1)
    {
        std::cout << d;
    }

    std::string arvo;
    std::vector<std::string> vektori{};
     while(std::cin >> arvo)
     {
         vektori.push_back(arvo);
     }
     std::cout << vektori.size();
     for(auto a: vektori)
     {
         std::cout << a;
     }



    return 0;
}
