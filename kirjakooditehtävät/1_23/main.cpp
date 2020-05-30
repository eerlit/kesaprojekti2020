#include <iostream>
#include <C:\testi\kirjakooditehtävät\sales_item.h>


int main()
{
    Sales_item item1, item2;

  if(std::cin >> item1){
   int arvo = 1;
   while(std::cin >> item2)
   {

       if(item2.isbn() == item1.isbn()){
           ++arvo;
       }
       else {
           std::cout << item1.isbn() << " " << arvo << std::endl;
           item1 = item2;
           arvo = 1;
       }
   }
   std::cout << item1.isbn() << " " << arvo << std::endl;

  }




    return 0;
}
