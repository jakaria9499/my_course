#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int max=-100000,max_in=0,min=100001,min_in=0;
    for(int i=0;i<n;i++){
        if(max<ar[i]){
            max=ar[i];
            max_in=i;

        }
        if(min>ar[i]){
            min=ar[i];
            min_in=i;
        }
    }
    
    ar[max_in]=min;
    ar[min_in]=max;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}