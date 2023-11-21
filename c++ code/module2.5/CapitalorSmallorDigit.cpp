#include<iostream>
using namespace std;
int main()
{   char a;
    cin>>a;
    int b = (int)a;
    if(b>47 && b<58){
        cout<<"IS DIGIT"<<endl;
    }
    else if(b>64 && b<91){
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    else if(b>96 && b<123){
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    else{
        cout<<"NOT a Digit"<<endl;

    }
    return 0;

}