#include <iostream>
using namespace std;
int a = 11;
int main()
{
    int a = 10;
    cout<<"loacal value of a is: "<<a<<endl;
    cout<<"global value of a is: "<<::a;
    return 0;
}