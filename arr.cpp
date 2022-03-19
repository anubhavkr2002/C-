#include<iostream>
using namespace std;

int main(){
    int marks[4]={1,2,3,4};
    cout<<"this are marks:--> "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    marks[2]=10;
    cout<<"after changing the index 2 from array elements:"<<marks[2];
    int mathmarks[4];
    mathmarks[0]=1;
    mathmarks[1]=2;
    mathmarks[2]=3;
    mathmarks[3]=4;
    cout<<"this are mathmarks:--> "<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    mathmarks[2]=11;
    cout<<"after changing the index 2 from array elements:"<<mathmarks[2];

    // for(int i=0;i<4;i++)
    // {
    //     cout<<"the value of marks "<<i<<" index is: "<<marks[i]<<endl;
    // }

    // int i=0;
    // while(i<4)
    // {
    //     cout<<"the value of marks "<<i<<" index is: "<<marks[i]<<endl;
    //     i++;
    // }
    // do{
    //     cout<<"the value of marks "<<i<<" index is: "<<marks[i]<<endl;
    //     i++;
    // }while(i<4);

    return 0;
}