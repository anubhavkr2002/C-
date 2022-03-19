#include<iostream>
using namespace std;

    union money
    {
        int rice;
        char car;
        float pounds;
    };
int main(){
    union money m1;
    m1.rice=22; //only one union value is executed otherwise it gives some garbage value 
    // m1.car='r';
    // m1.pounds=2.1;
    cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    // cout<<m1.pounds;
    return 0;
}