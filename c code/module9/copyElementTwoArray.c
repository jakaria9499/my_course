#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    int ar1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&ar1[i]);
    }
    scanf("%d",&n2);
    int ar2[n2];
    for(int i=0; i<n2; i++){
        scanf("%d",&ar2[i]);
    }
    int ar[n1+n2];
    for(int i=0;i<n1;i++){
        ar[i]=ar1[i];
    }
    int a=0;
    for (int i = n1; i < n1+n2; i++)
    {
        ar[i]=ar2[a];
        a++;
    }
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",ar[i]);
    }
    
    
    return 0;
}