#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001],flag=0;
    scanf("%s",&s);
    int i=0,j=strlen(s)-1;
    while (i<j)
    {
        if(s[i]!=s[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}