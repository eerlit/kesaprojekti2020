#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{

    char a[] = "jee";
    char b[] = "juu";

    char c[50];

    strcpy(c, a);
    strcat(c, " ");
    strcat(c, b);

    std::cout << c;


    return 0;
}
