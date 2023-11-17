#include <stdio.h>
void re(int n)
{
    if(n==0) return;
    printf("I love Recursion\n");
    re(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    re(n);
    return 0;
}
