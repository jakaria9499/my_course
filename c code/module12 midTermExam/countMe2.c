#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s",a);
    int vow=0,con=0;
    for (int i = 0; i < strlen(a); i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vow++;
        }else{
            con++;
        }
    }
    printf("%d",con);
    return 0;
}