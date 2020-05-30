#include <iostream>



int main()
{
    constexpr size_t rowCnt = 3, colCnt =4;
    int ia[rowCnt][colCnt] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}

    };


   /* for(int (&row)[colCnt] : ia)
    {
        for(int &col  : row)
        {
            std::cout << col << " ";

        }
        std::cout << std::endl;
    }*/

   /* for(size_t i = 0; i != rowCnt; i++)
    {
        for(size_t j = 0; j != colCnt; j++)
        {
            std::cout << ia[i][j] << " ";
        }

        std::cout << std::endl;
    }*/


    for(int (*i)[colCnt] = ia; i != ia + rowCnt; i++)
    {
        for(int *j = *i; j != *i + colCnt; j++)
        {
            std::cout << *j << " ";

        }
        std::cout << std::endl;
    }


    return 0;
}
