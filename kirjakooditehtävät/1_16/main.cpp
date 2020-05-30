#include <iostream>


int main()
{
   int summa = 0;
   int arvo = 0;

   while(std::cin >> arvo)
   {
    summa += arvo;
     std::cout << "summa on " << summa << std::endl;

   }



    return 0;
}
