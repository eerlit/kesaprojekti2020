#include <iostream>



int main()
{

    int ia[] = {1,2,3,4};



   int *pEnd = ia +3;

for(int *i = ia; i <= pEnd; i++)
/   {
    *i = 0;

}

for(auto a :ia)
{
    std::cout << a << " ";
}
    return 0;
}
