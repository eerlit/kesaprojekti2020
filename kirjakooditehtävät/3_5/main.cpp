#include <iostream>
#include <stdio.h>



int main()
{
   std::string merkkijono;
   std::string annettuMerkkijono;
   char k;


   do
   {

     std::cout << "anna merkkijono: ";
     std::getline(std::cin, annettuMerkkijono);

   merkkijono.append(annettuMerkkijono);
   merkkijono.append(" ");

   std::cout << "luetaanko uusi merkkijono? (k/e) ";
   std::cin >> k;
fflush(stdin);



 }while(k != 'e');

   std::cout << "merkkijono: " <<merkkijono;




    return 0;
}
