#include<iostream>
using namespace std;

int main(){
    int marks[4]={1,2,3,4};
    int *p=marks;
    // for (int i = 0; i < 4; i++)
    // {
    // cout<<*(p+i)<<endl;
    // }
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    return 0;
}