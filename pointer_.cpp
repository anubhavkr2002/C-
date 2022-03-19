#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    int**c=&b;
    int***d=&c;

    cout<<&a<<endl;//address of a=0x61febc
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;//address of b=0x61feb8
    cout<<*b<<endl;
    cout<<c<<endl;
    cout<<&c<<endl;//address of c=0x61feb4
    cout<<*c<<endl;
    cout<<**c<<endl;
    cout<<d<<endl;
    cout<<&d<<endl;//address of d=0x61feb0
    cout<<*d<<endl;
    cout<<**d<<endl;
    cout<<***d<<endl;
    return 0;
}