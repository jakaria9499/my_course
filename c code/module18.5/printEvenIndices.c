#include <stdio.h>
void PrintEven(int a[], int n, int i)
{   
    // if(n==0){
    //     printf("%d ",a[0]);
    //     return;
    // }
    
    // if(n%2==0){
    //     printf("%d ",a[n]);
    // }
    // PrintEven(a,n-1);






    if(i==n) return;
    
    PrintEven(a,n,i+1);
    if(i%2==0)
    {
        printf("%d ",a[i]); 
    }
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    PrintEven(a,n,0);
    return 0;
    
}