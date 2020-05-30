#include <iostream>
#include <vector>



int main()
{
int apu =0;
    std::vector<int> a {1,2,3,4,5,6,7,8,9,10};

   for(auto it = a.begin(); it != a.end(); it++)
   {
    apu = *it;
    *it = apu * apu;
   }

   for(auto i :a)
   {
    std::cout << i << " ";
   }

    return 0;
}
