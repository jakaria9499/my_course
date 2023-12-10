#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int mid=n/2;
    int sp1=0,a=1,sp2=n-2,b=1,sp3=0,x=0;
    for (int i = 1; i <= n; i++)
    {
        if(i<=mid)
        {
            
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < a; j++)
            {
                cout<<"\\";
            }
            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < b; j++)
            {
                cout<<"/";
            }
            for (int j = 0; j < sp3; j++)
            {
                cout<<" ";
            }
            sp1++;
            sp2=sp2-2;
            sp3++;
            cout<<endl;
            
        }
        else if(i==mid+1)
        {   

            sp1=(n-1)/2;
            a=0;
            b=0;
            x=1;
            sp2=0;
            sp3=(n-1)/2;
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < x; j++)
            {
                cout<< "X";
            }
            for (int j = 0; j < sp3; j++)
            {
                cout<<" ";
            }
            cout<<endl;

        }
        else if(i==mid+2)
        {   
            sp1=(n-3)/2;
            a=1;
            sp2=1;
            b=1;
            sp3=(n-3)/2;
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < b; j++)
            {
                cout<<"/";
            }

            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < a; j++)
            {
                cout<<"\\";
            }
            for (int j = 0; j < sp3; j++)
            {
                cout<<" ";
            }
            cout<<endl;

        }
        else
        {   
            sp1--;
            sp3--;

            sp2=sp2+2;
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < b; j++)
            {
                cout<<"/";
            }
            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }

            for (int j = 0; j < a; j++)
            {
                cout<<"\\";
            }
            for (int j = 0; j < sp3; j++)
            {   
                cout<<" ";
                
                
            }

            cout<<endl;


        }
        
        
        
        
    
    }
    


    return 0;
}




