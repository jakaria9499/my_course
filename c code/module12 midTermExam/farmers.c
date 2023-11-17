#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    for (int i = 0; i < n; i++)
    {   
        scanf("%d %d %d",&a,&b,&c);
        int fi =a*c;
        int se =fi/(a+b);
        int re = c-se;
        printf("%d\n",re);   
    }
    return 0;
}