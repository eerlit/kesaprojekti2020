#include <iostream>


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

std::cout <<  "anna arvo A: ";
std::cin >> a;
std::cout <<"anna arvo B: ";
std::cin >> b;
if(a < b)
{
 b = a - 1;
}
std::cout <<"anna arvo C: ";
std::cin >> c;
if(b < c)
{
    c = b - 1;
}
std::cout <<"anna arvo D: ";
std::cin >> d;
if(c < d)
{
    d = c - 1;

}
std::cout << "A: " << a << "B: " << b << "C: " << c << "D: " << d;

    return 0;
}
