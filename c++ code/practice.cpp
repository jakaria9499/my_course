#include<bits/stdc++.h>
using namespace std;

class Student
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
    Student a,b,c;
    for (int i = 0; i < n; i++)
    {  
        cin>>a.id>>a.name>>a.setion>>a.marks;
        cin>>b.id>>b.name>>b.setion>>b.marks;
        cin>>c.id>>c.name>>c.setion>>c.marks;

        if(a.marks==b.marks)
        {
            (a.id<b.id) ? cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks : cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
        }
        else if(a.marks==c.marks)
        {
            (a.id<c.id) ? cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks : cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
        }
        else if(b.marks==c.marks)
        {
            (b.id<c.id) ? cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks : cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks;
        }
        else
        {
            if(a.marks>b.marks && a.marks>c.marks)
            {
                cout<<a.id<<" "<<a.name<<" "<<a.setion<<" "<<a.marks;
            }
            else if(b.marks>a.marks && b.marks>c.marks)
            {
                cout<<b.id<<" "<<b.name<<" "<<b.setion<<" "<<b.marks;
            }
            else
            {
                cout<<c.id<<" "<<c.name<<" "<<c.setion<<" "<<c.marks; 
            }
        }
        cout<< endl;
    }
    return 0;
}