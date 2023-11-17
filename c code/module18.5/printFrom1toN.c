#include <stdio.h>
void re(int n)
{
    if(n==0) return;
    re(n-1);
    printf("%d\n",n);
}
int main()
{   
    int n;
    scanf("%d",&n);
    re(n);
    return 0 ;

}