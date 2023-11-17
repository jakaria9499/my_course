#include<bits/stdc++.h>
using namespace std;

class Information
{
public:
    int id;
    char name[101];
    char setion;
    int marks;
};



int main()
{
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {   
        Information a,b,c;
        cin>>a.id>>a.name>>a.setion>>a.marks;
        cin>>b.id>>b.name>>b.setion>>b.marks;
        cin>>c.id>>c.name>>c.setion>>c.marks;
        if(a.marks>b.marks && a.marks>c.marks)
        {
            cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
        }
        else if(b.marks>a.marks && b.marks>c.marks)
        {
            cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
        }
        else if(c.marks>a.marks && c.marks>b.marks)
        {
            cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks; 
        }
        else
        {
            if(a.marks==b.marks && a.marks==c.marks)
            {
                if(a.id<b.id && a.id<c.id)
                {
                    cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
                }
                else if(b.id<a.id && b.id<c.id)
                {
                    cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
                }
                else
                {
                    cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
                }
            }
            else if(a.marks==b.marks)
            {
                if(a.marks>c.marks)
                {
                    if(a.id<b.id)
                    {
                        cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
                    }
                    else
                    {
                        cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
                    }
                }
                else
                {
                    cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
                }
            }
            else if(a.marks==c.marks)
            {
                if(a.marks>b.marks)
                {
                    if(a.id<c.id)
                    {
                        cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
                    }
                    else
                    {
                        
                        cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
                    }
                }
                else
                {
                    cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
                }
            }
            else if(b.marks==c.marks)
            {
                if(b.marks>a.marks)
                {
                    if(b.id<c.id)
                    {
                        cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
                    }
                    else
                    {
                        
                        cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
                    }
                }
                else
                {
                    
                    cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
                }
            }
            
            
        }
        cout<< endl;







        // if(a.marks==b.marks && a.marks==c.marks)
        // {
        //     if(a.id<b.id && a.id<c.id)
        //     {
        //         cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
        //     }
        //     else if(b.id<a.id && b.id<c.id)
        //     {
        //         cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
        //     }
        //     else
        //     {
        //         cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
        //     }
        // }
        // else{

        
        //     if(a.marks==b.marks)
        //     {
        //         if(a.id<b.id)
        //         {
        //             cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
        //         }
        //         else
        //         {
        //             cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
        //         }
        //     }
        //     else if(a.marks==c.marks)
        //     {
        //         if(a.id<c.id)
        //         {
        //             cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
        //         }
        //         else
        //         {
        //             cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
        //         }
        //     }
        //     else if(b.marks==c.marks)
        //     {
        //         if(b.id<c.id)
        //         {
        //             cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
        //         }
        //         else
        //         {
        //             cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
        //         }
        //     }

        //     else
        //     {
        //         if(a.marks>b.marks && a.marks>c.marks)
        //         {
        //             cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
        //         }
        //         else if(b.marks>a.marks && b.marks>c.marks)
        //         {
        //             cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
        //         }
        //         else
        //         {
        //             cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks; 
        //         }
        //     }
            
        // }

    }
    
    
    

    

        

    
    return 0;
}