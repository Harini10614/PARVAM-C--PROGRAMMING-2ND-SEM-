//unary operator
#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int b=200;
    cout << "Post Increment=" << (a++)<< endl;
    cout << "Post Decrement=" << (a--)<< endl;
    cout << "Pre increment=" << (++a)<< endl;
    cout << "Pre decrement=" << (--a)<< endl;

    return 0;
}