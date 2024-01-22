#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
        Student(string name,int roll, int marks)
        {
            this->name =name;
            this->marks = marks;
            this->roll = roll;
        }
};
class cmp
{
    public:
    bool operator()(Student a, Student b)
    {
        if(a.marks < b.marks) return true;
        else if(a.marks > b.marks) return false;
        else
        {
            if(a.roll > b.roll) return true;
            else return false;
        }
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>> x;
        if(x==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
        }
        else if(x==2)
        {
            if(!pq.empty()) 
            {
                pq.pop();
            }
        }
        if(!pq.empty())
        {
            cout<<pq.top().name <<" " << pq.top().roll <<" "<<pq.top().marks<<endl;
        }
        else
        {
            cout<<"Empty"<<endl;
        }


    }

    

    return 0;
}