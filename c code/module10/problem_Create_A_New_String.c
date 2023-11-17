#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000];
    scanf("%s",a);
    scanf("%s",b);
    int i =0,counta=0,countb=0;
    while(a[i]!='\0'){
        counta++;
        i++;
    }
    int j=0;
    while (b[j]!='\0'){
        countb++;
        j++;
    }
    printf("%d %d\n%s %s\n",counta,countb,a,b);

    
    return 0;
}