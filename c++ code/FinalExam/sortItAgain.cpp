#include<bits/stdc++.h>
using namespace std;
class Data
{
    public:
    string nm;
    int cls,id,math_marks,eng_marks;
    char s;
};
bool cmp(Data a, Data b)
{

    if(a.eng_marks>b.eng_marks) return true;
    else if(a.eng_marks<b.eng_marks) return false;
    else
    {
        if(a.math_marks>b.math_marks) return true;
        else if(a.math_marks<b.math_marks) return false;
        else
        {
            if(a.id<b.id) return true;
            else return false;
        }
    }

}
int main()
{
    int n;
    cin >> n;
    Data a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].nm<< " " <<a[i].cls<< " " <<a[i].s<< " " <<a[i].id << " " <<a[i].math_marks<< " " << a[i].eng_marks << endl;
    }

    return 0;
}