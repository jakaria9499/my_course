#include <stdio.h>
int main()
{
    char a[7];
    scanf("%s",a);//& dite hoy na o nejei akta adrress of;
    int sz=sizeof(a)/sizeof(char);
    printf("%d",sz);
    printf("%s\n",a);

    return 0;
}