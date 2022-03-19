#include<iostream>
using namespace std;
int sum(int a,int b);
void g();

int main(){
    int a,b;
    cout<<"Enter a first number: "<<endl;
    cin>>a;
    cout<<"Enter a second number: "<<endl;
    cin>>b;
    cout<<"sum of a+b is: "<<sum(a,b)<<endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    int c=a+b;
    return c;
}

void g()
{
    cout<<"hello world";
}