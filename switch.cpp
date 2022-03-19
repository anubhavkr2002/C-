#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number :";
    cin >> a;
    switch (a)
    {
    case 2:
        cout << "your number is 2";
        break;
    case 1:
        cout << "your number is 1";
        break;
    default:
        cout << "invaild number";
        break;
    }
    return 0;
}