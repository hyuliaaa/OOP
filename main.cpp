#include <iostream>
#include <vector>


int main() {

    //Lambda expressions
    [](){std::cout<<"Hello"<<std::endl;}();
    //[]-capture list, here we can give values to the function, which are outside the finction
    //() - parameter list
    // last ()= they are for calling the function


    //example with passing arguments
    [](int x, int y){std::cout<<x+y<<std::endl;}(5,7);
    int z=[](int x,int y)->int{return x+y;}(3,8);
    std::cout<<z<<std::endl;

    //another type of lambda expression
    int a=10;
   // [](){std::cout<<a<<std::endl;}(); we get the error that a cannot be accessed so in order to access it, we have to put it in the capture list
   // [a](){std::cout<<a<<std::endl;}();

    auto f=[a](){std::cout<<a<<std::endl;}; // f has became a function name for the lambda expression
    f(); //a =10
    a++;
    f(); //a=10, a is replaced by the 10 in the definition of the lambda expression

    //if we want to make changes to the element we should put an &in the capture list
    int b=11;
    auto h=[&b](){std::cout<<b<<std::endl;};
    h(); //11
    b++;
    h(); //12

    int v1 = 10;
    int v2 = 10;
    // Достъп до v1 и v2
    auto addValue = [&] (int m) {
        v1 += m;
        v2 += m;
    };
    addValue(20);
    std::cout << v1 << " " << v2;



    return 0;
}