#include <iostream>
using namespace std;
int sum = 33;
int main()
{
    int n1, n2, sum;
    cout << "Enter the value of n1: ";
    cin >> n1;
    cout << "Enter the value of n2: ";
    cin >> n2;
    sum = n1 + n2;
    cout << "sum of n1+n2 in local variable is: " << sum << endl;
    cout << "sum in global variable is: " << ::sum;
    return 0;
}