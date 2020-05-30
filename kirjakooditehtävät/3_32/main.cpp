#include <iostream>
#include <vector>


int main()
{

    int ia[10] ={1,2,3,4,5,6,7,8,9,10};

    int ib[10];

    for(size_t i = 0; i != 10; i++)
    {
        ib[i] = ia[i];

    }



std::vector<int> iA {1,2,3,4,5,6,7,8,9,10};
std::vector<int> iB;

for(int i = 0; i < iA.size(); i ++)
{
    iB.push_back(iA.at(i);

}
for(auto a : iB)
{
    std::cout << a << " ";
}

    return 0;
}
