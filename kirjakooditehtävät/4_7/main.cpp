#include <iostream>



int main()
{

    //ylivuoto tarkoittaa sitä, että muuttujista laskettu arvo ei ole jollain tietyllä välillä

    unsigned int d =0;
    d--;
    std::cout <<d << std::endl;
    int x;
    x = 2147483647;
    x++;
    std::cout << "x " <<x;
    std::cout << std::endl;
    unsigned int y(4294967295);
    y++;
    std::cout << "y " << y;

    return 0;
}
