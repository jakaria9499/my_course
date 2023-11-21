#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int small=INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if(small>a[i]){
                small=a[i];
            }
        }   
    }
    int count=0;
    for (int  i = 0; i < n; i++)
    {
        if(small==a[i]){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky\n");
    }else{
        printf("Lucky\n");
    }
    
    
    
    return 0;
}