#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n/2;
    int sp=x+5,st=1;

    for(int i=0; i<11+x; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < st; j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<x+5)
        {
            sp--;
            st+=2;
        }
        else{
            sp=5;
            st=n;
        }
        
    }
    return 0;
}