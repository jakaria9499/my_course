#include<bits/stdc++.h>
using namespace std;
class Student 
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    // cin.ignore();
    Student a[n];
    // Student * a= new Student[n]; for dynamic array object
    for (int i = 0; i < n; i++)
    {   
        cin.ignore();
        getline(cin,a[i].name);
        cin>> a[i].roll >> a[i].marks;
        // cin.ignore();
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cin>> a[i].name >>a[i].roll >> a[i].marks;
    // }
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i].name <<" "<<a[i].roll << " "<< a[i].marks <<endl;
    }
    

    return 0;
}