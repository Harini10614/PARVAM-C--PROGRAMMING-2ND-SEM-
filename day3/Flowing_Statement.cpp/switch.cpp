//switch case
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter your choice" << endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "KYC VERIFIED" << endl;
            break;
        case 2: 
            cout << "KYC VERIFIED" << endl;
            break;
        case 3:
            cout << "KYC VERIFIED" << endl;
            break;
        default:
            cout << "INVALID CHOICE" << endl;
            return 0;
    }
}