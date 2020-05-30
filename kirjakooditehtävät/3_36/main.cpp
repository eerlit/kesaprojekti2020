#include <iostream>
#include <vector>


int main()
{
  int ai[] = {1,2,3,4,5};
  int ab[] = {1,2,3,4,5};


     int *pEnd = ai +3;
     int *b = ab;

  for(int *i = ai; i <= pEnd; i++)
     {
      if(*i != *b)
      {
          std::cout << "arrayt ovat erilaisia.";
           break;
      }else if (*i == *pEnd){

       std::cout << "arrayt ovat samanlaisia!";
      }
  b++;
  }
  std::cout << std::endl;



  std::vector<int> a {1,2,3,4,5};
  std::vector<int> c {1,2,3,4,5};
  bool sama = true;

 for(auto it = a.begin(); it != a.end() -1; it++)
 {
  if(a.at(*it) != c.at(*it))
  {
      std::cout << "vektorit ovat erilaisia.";
      sama = false;
      break;
  }

 }
if(sama)
{
    std::cout << "vektorit ovat samanlaiset.";
}

    return 0;
}
