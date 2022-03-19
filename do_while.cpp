#include <iostream>
using namespace std;

//Do while loop

int main()
{
    int a = 1, n;
    cout << "Enter a number: ";
    cin >> n;
    do
    {
        cout << n << " x " << a << " = " << n * a << endl;
        a++;
    } while (a <= 10);
    return 0;
}