#include <iostream>
#include <vector>
int main() {

    std::vector<int> vec{1,2,3,4,5};

    //vec.begin() points to the first element of the vector
    std::cout<<*(vec.begin())<<std::endl;

    //vec.end() point after the last element of the vector
    std::cout<<*(vec.end())<<std::endl; // output is zero because we are poinrting after the last element of the vector and usually vector elements are zero


    for(std::vector<int>::iterator it=vec.begin(); it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    //this shows how range-based for loops work;
    std::cout<<std::endl;
    vec.push_back(8);
    for(int x:vec)
    {
        std::cout<<x<<" ";
    }

    std::cout<<std::endl;
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }

    //reverse iterators-last element is the first and first element is the last
    





    return 0;
}
