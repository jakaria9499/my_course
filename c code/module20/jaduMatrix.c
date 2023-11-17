#include <stdio.h>
int main()
{
    int n,m,flag=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    if(n==m)
    {
        for (int  i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(i==j || i+j==n-1)
                {
                    if(a[i][j]!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(a[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }

    }
    else
    {
        flag=1;
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






// 7 8
// 1 0 0 0 0 0 1 0 
// 0 1 0 0 0 1 0 0 
// 0 0 1 0 1 0 0 0 
// 0 0 0 1 0 0 0 0 
// 0 0 1 0 1 0 0 0 
// 0 1 0 0 0 1 0 0 
// 1 0 0 0 0 0 1 0