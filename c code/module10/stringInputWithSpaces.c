#include <stdio.h>
#include <string.h>
int main()
{
    //2 way ache 
    //1 gets() not standers;
    //2 fgets() standers;

    // char a[14];
    // gets(a);
    // printf("%s",a);


    char b[20];
    fgets(b,20,stdin);
    printf("%s",b);
    //fgets Enter keo input nei
    return 0;
}