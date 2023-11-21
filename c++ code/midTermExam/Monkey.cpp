#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[100001];
    while(cin.getline(a,100001))
    {   int len= strlen(a);
        sort(a, a + len);
        for (int i = 0; i < len; i++)
        {   
            if(a[i]==' ')
            {
                continue;
            }
            else{
                cout<<a[i];
            }
            
            
        }
        cout<<endl;
        

    }





    return 0 ;

}