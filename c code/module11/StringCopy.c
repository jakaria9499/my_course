#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    ////////////////////////////////////////
    // for logic,,,,,...
    // for(int i=0;i<=strlen(b);i++){
    //     a[i]=b[i];                     aita strcpy(a,b) er function
    // }
    //////////////////////////////
    strcpy(a,b);//for real use
    printf("%s %s",a,b);
    return 0;
}