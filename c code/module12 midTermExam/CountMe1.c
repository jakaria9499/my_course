#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int a=0,b=0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]%2==0){
            a++;
        }else if(ar[i]%3==0){
            b++;
        }
    }
    printf("%d %d\n",a,b);
    
    return 0;
}