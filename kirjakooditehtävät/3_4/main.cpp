#include <iostream>



int main()
{

    std::string x;
    std::string y;

    std::cout << "anna ensimmainen string: ";
    getline(std::cin, x);
    std::cout << "anna toinen string: ";
    getline(std::cin, y);

     x == y ? std::cout << "merkkijonot ovat samanpituisia." : (x < y ? std::cout << "jalkimmaisena annettu merkkijono on pitempi." : std::cout << "ensimmaisena annettu merkkijono on pitempi.") ;





    return 0;
}
