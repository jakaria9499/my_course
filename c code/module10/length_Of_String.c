#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    // fgets(a,15,stdin);// aita 1 beshi output dei
    scanf("%s",a);
    // int count=0;
    // int i=0;
    // while(a[i]!='\0'){
    //     count++;
    //     i++;
    // }

    int count = strlen(a);
    printf("%d\n",count);
    return 0;
}