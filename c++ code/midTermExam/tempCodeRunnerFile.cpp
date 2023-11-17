#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   for (int  i = 0; i < n; i++)
   {
        char a[100001];
        cin.getline(a,100001);
        sort(a,a+strlen(a));
        for (int j = 0; j < strlen(a); j++)
        {
            if(a[j]==' ')
            {
                continue;
            }
            else{
                cout<<a[j];
            }
        }
        cout<<endl;

   }
   
    

    return 0 ;

}