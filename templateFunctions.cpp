#include <iostream>
#include <vector>

template <typename T>
T greater(T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

template <typename T,typename  R>
void addElements(T x, R y)
{
    std::cout<<x+y<<std::endl;
}


template <typename T>
void printArray(T *arr, int n)
{
    for(int i=0; i<n ;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}


int main() {

    std::cout<<greater(5,7)<<std::endl;
    std::cout<<greater(6.7,8.5)<<std::endl;

    std::cout<<greater<int>(5,7.8)<<std::endl; //converts 7.8 to 7

    addElements(5,5.8);

    int arr[]={5,6,7,8};
    printArray(arr,4);

    double arr1[]={5.6,5.6,5.8};
    printArray(arr1,3);

    return 0;
}
