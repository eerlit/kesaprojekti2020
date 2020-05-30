#include <iostream>
#include <vector>



int main()
{
std::vector<int> a {0,1,2,3,4,5};

int arr[7];
    int *alku = arr;
    int *loppu = arr + a.size();

    for(auto &i :a)
{
        *alku++ = i;
    }

    return 0;
}
