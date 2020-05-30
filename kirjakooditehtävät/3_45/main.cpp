#include <iostream>



int main()
{

    constexpr size_t rowCnt = 3, colCnt =4;
    int ia[rowCnt][colCnt] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}

    };


/*
    for(auto &row : ia)
    {
        for(auto &col  : row)
        {
            std::cout << col << " ";

        }
        std::cout << std::endl;
    }*/

  /* for(auto i = 0; i != rowCnt; i++)
    {
        for(auto j =0; j != colCnt; j++)
        {
            std::cout << ia[i][j] << " ";
        }

        std::cout << std::endl;
    }*/


    for(auto (*i) = ia; i != ia + rowCnt; i++)
    {
        for(auto *j = *i; j != *i + colCnt; j++)
        {
            std::cout << *j << " ";

        }
        std::cout << std::endl;
    }



    return 0;
}
