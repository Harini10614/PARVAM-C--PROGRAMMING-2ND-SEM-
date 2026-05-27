//Factorial 
#include<iostream>
using namespace std;

int main()
{
    int num,fact;
    cout << "Please enter the number:";
    cin >> num; 

    fact = 1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout << "The factorial is = " << fact;
    return 0;
}
