#include <iostream>
#include <vector>
template <class T>
class Stack
{
private:
    T *data; //pointer to array fr storing the elements
    int top;
    int size;
public:

    Stack(int sz);
    Stack(const Stack& other);
    Stack& operator=(const Stack& other);
    ~Stack();


    void push(T x);
    T pop();
    void print();


};
template <class T>
Stack<T>::Stack(int sz)
{
    size=sz;
    top=-1;
    data=new T[size];
}
template <class T>
Stack<T>::Stack(const Stack &other)
{
    top=other.top;
    size=other.size;
    data=new T[other.data];
    for(int i=0; i<size;i++)
    {
        data[i]=other.data[i];
    }
}
template <class T>
Stack<T>& Stack<T>::operator=(const Stack &other)
{
    if(this!=&other)
    {
        delete []data;
        top=other.top;
        size=other.size;
        data=new T[other.data];
        for(int i=0; i<size;i++)
        {
            data[i]=other.data[i];
        }
    }
    return *this;
}

template <class T>
Stack<T>::~Stack()
{
    delete [] data;
}
template <class T>
void Stack<T>::push(T x)
{
    if(top==size-1)
    {
        std::cout<<"Stack is full";
    }
    else
    {
        top++;
        data[top]=x;
    }
}
template <class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
    {
        std::cout<<"Stack is empty";

    }
    else
    {
        x=data[top];
        top--;
    }
    return x;

}
template <class T>
void Stack<T>::print()
{
    for(int i=0; i<size;i++)
    {
       std::cout<< data[i]<<" ";
    }
    std::cout<<std::endl;
}

int main() {

    Stack<int> s(2);
    s.push(10);
    s.push(23);

    Stack <double> st(2);
    st.push(2);
    st.push(1);
    st.print();




    return 0;
}