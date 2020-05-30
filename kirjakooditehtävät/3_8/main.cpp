#include <iostream>



int main()
{

   std::string lause = "makkarakauppa";

int i = 0;

 while(i != lause.length())
  {
   lause[i] = 'x';
i++;
  }

/*
    for(int i = 0; i < lause.length(); i++)
    {
        lause[i] = 'x';

    }*/
    std::cout << lause;

    return 0;
}
