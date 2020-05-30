#include <iostream>



int main()
{

   std::string lause = "makkarakauppa";

   for(char &i : lause)
   {
     i = 'x';

   }
    std::cout << lause;


    return 0;
}
