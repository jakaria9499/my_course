#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;
    int result = 0;
    for (int i = 2; i <= b; i=i+2)
    {   
        int p =1;
        for(int j=1; j<=i; j++)
        {
            p *= a ;
        }
        result += p;
    }
    cout << result << endl;
    

    return 0;
}