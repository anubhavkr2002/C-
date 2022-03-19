#include<iostream>
using namespace std;
void swap(int* a, int* b);
//swap using pointer reference
int main(){
    int a,b,temp;
    cout<<"Enter a first number: "<<endl;
    cin>>a;
    cout<<"Enter a second number: "<<endl;
    cin>>b;
    swap(&a,&b);
    cout<<"the value of a after swaping is: "<<a<<endl;
    cout<<"the value of b after swaping is: "<<b;
    return 0;
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

// #include<iostream>
// using namespace std;
// void swap(int &a, int &b);
// // swap using reference variables
// int main(){
//     int a,b;
//     cout<<"Enter a first number: "<<endl;
//     cin>>a;
//     cout<<"Enter a second number: "<<endl;
//     cin>>b;
//     swap(a,b);
//     cout<<"the value of a after swaping is: "<<a<<endl;
//     cout<<"the value of b after swaping is: "<<b;
//     return 0;
// }
// void swap(int &a, int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cout<<"Enter a first number: "<<endl;
//     cin>>a;
//     cout<<"Enter a second number: "<<endl;
//     cin>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"the value of a after swaping is: "<<a<<endl;
//     cout<<"the value of b after swaping is: "<<b;
//     return 0;
// }

