#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char st[1000001];
    scanf("%s",st);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+st[i]-48;
    }
    printf("%d",sum);
    return 0;
}