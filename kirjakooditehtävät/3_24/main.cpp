#include <iostream>
#include <vector>

int main()
{
 std::vector<int> v;

 int i= 0;
 int summa = 0;
 int ekaVika = 0;

  while(std::cin >> i)
    {

     v.push_back(i);
 }

 if(v.size() >= 2)
 {
     for(auto it = v.cbegin(); it != v.cend() - 1; it++)
     {
         summa = *it + *(it +1);
     }
    }
    for(auto i : v)
    {
        std::cout << i << " ";
    }
    auto keski = v.cbegin() + (v.cend() -v.cbegin() +1) /2;
   for(auto it = v.cbegin(); it != v.cend(); it++)
   {
    std::cout << *it + *(v.cend() - 1 -( it-v.cbegin()));
    std::cout << std::endl;
   }

    return 0;
}
