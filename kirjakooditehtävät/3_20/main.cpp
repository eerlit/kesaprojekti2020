#include <iostream>
#include <vector>


int main()
{
std::vector<int>lukuja;
int arvo = 0;
int summa = 0;
    while(std::cin >> arvo)
    {

        lukuja.push_back(arvo);
    }
/*if(lukuja.size() >= 2)
{
 for(int i = 0; i < lukuja.size(); i++)
 {
     std::cout << lukuja[i] + lukuja[i+1];
     std::cout << std::endl;

 }

}*/
   int arvo1 = (lukuja.size() + 1) /2;

   for(decltype(arvo1) i = 0; i != arvo1; i++)
   {
    std::cout << lukuja[i] + lukuja[lukuja.size()-1-i] << '\t';
    std::cout << std::endl;

   }



    return 0;
}
