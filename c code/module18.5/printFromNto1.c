#include <stdio.h>
void re(int n)
{
    if(n==1) 
    {   
        printf("%d",n);
        return;
    }
    printf("%d ",n);
    re(n-1);
    
}
int main()
{   
    int n;
    scanf("%d",&n);
    re(n);
    return 0 ;

}