#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    int flag=0 ,a=n;
    if(n==m)
    {
        for (int  i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j)
                {
                    if(a[i][j]!=1)
                    {
                        flag=1;
                    }
                }
                else if(i+j==a-1)
                {
                    if(a[i][j]!=1)
                    {
                        flag=1;
                    }
                }
                else
                {
                    if(a[i][j]>0)
                    {
                        flag=1;
                    }
                }
            }
        }

    }
    else
    {
        printf("NO\n");
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}