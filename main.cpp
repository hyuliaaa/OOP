#include <iostream>
#include <vector>

void printVector(std::vector<int>& vec)
{
    for(auto x:vec)
    {
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
}
int main() {
    std::vector<int>vec1{1,3,5,8,7};
    printVector(vec1);

    std::vector<int>vec2(5,100);//creates 5 100s
    printVector(vec2);

    std::cout<<vec1.size()<<std::endl; //number of eleemnts in vec
    std::cout<<vec1.max_size()<<std::endl; //give the maximum size, usually a very large number
    std::cout<<vec1.at(3)<<std::endl; // gives element at current index
    std::cout<<vec1[3]<<std::endl;
    std::cout<<vec1.front()<<std::endl;//gives the first element of the vector
    std::cout<<vec1.back()<<std::endl; // gives the last element of  the vector

    vec1.push_back(12);
    printVector(vec1);
    vec1.pop_back(); //rem oves the last element
    printVector(vec1);


    return 0;
}