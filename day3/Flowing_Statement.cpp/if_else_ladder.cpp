//if-else ladder
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks of the students";
    cin >> marks;
    if(marks>90)
    {
        cout << "Grade A" << endl;
    }
    else if(marks>75)
    {
        cout << "Garde B" << endl;
    }
    else if(marks>60)
    {
        cout << "Grade C" << endl;
    }
    else if(marks>50)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
} 