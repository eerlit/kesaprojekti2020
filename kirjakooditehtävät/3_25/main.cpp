#include <iostream>
#include <vector>


int main()
{
    std::vector<unsigned> scores(11, 0);
    unsigned grade;
    while (std::cin >> grade) {
     if (grade <= 100)
     ++(scores.begin() + grade/10);
    }
    for(const auto &elem : scores)
    {
        std::cout << elem << ' ';
        std::cout << std::endl;
    }






    return 0;
}
