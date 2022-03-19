#include<iostream>
using namespace std;

    struct employee //(typedef struct employee) use this then you can replace struct employee into ep then it is easy to write
    {
        int id;
        char favchar;
        float salary;
    };
int main(){
    struct employee alex;
    alex.id=21109900;
    alex.favchar='A';
    alex.salary=50000;

    struct employee alexa;
    alexa.id=211090;
    alexa.favchar='X';
    alexa.salary=60000;

    cout<<alex.id<<endl;
    cout<<alex.favchar<<endl;
    cout<<alex.salary<<endl;
    
    cout<<alexa.id<<endl;
    cout<<alexa.favchar<<endl;
    cout<<alexa.salary<<endl;
    return 0;
}