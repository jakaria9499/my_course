#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = 0; i < a;  i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}