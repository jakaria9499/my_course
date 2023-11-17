#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {   
        int m,y=0,size;
        scanf("%d",&size);
        int ar[size];
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&ar[j]);
        }
 
        scanf("%d",&m);
        for (int j = 0; j < size; j++)
        {   
            if (ar[j]==m)
            {
                y++;
            }
        }
        if(y>0){
            printf("YES\n");
        }else{
            
            printf("NO\n");
        }
        
        
        
    }
    
    return 0;
}