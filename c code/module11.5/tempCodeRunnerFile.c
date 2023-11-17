#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char st[11];
    scanf("%s",st);
    int sum=0;
    for(int i=0;i<strlen(st);i++){
        sum=sum+st[i]-48;
    }
    printf("%d",sum);
    return 0;
}