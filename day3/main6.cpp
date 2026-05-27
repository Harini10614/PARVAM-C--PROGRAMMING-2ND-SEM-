#include <iostream>
using namespace std;

int main()
{
    int marks;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter marks: ";
        cin >> marks;

        bool is_pass = marks > 45;

        if (is_pass)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    return 0;
}
