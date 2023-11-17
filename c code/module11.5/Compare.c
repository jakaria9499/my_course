#include <stdio.h>
#include <string.h>
int main()
{
    char a[30],b[30];
    scanf("%s %s",a,b);
    int re = strcmp(a,b);
    if(re>0){
        printf("%s\n",b);
    }else if(re<0){
        printf("%s\n",a);
    }else{
        printf("%s\n",a);
    }
    return 0;
}