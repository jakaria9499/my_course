#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[11],ch2[11];
    scanf("%s %s",ch1,ch2);
    int size1 = strlen(ch1),size2 = strlen(ch2);
    printf("%d %d\n",size1,size2);
    printf("%s%s\n",ch1,ch2);
    char temp=ch1[0];
    ch1[0]=ch2[0];
    ch2[0]=temp;
    printf("%s %s",ch1,ch2);

    return 0;
}