#include <stdio.h>
int main()
{
    int n,m,x,flag=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    scanf("%d",&x);
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==x){
                flag=1;
                break;
            }
        }
        
    }
    if(flag==0){
        printf("will take number");
    }else{
        printf("will not take number");
    }
    
}