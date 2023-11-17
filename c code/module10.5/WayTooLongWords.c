#include <stdio.h>
#include <string.h>
int main()
{   int n;
    scanf("%d",&n);
    char ch[110];
    for(int i=1;i<=n;i++){
        scanf("%s",ch);
        int len=strlen(ch);
        if(len>10){
            printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
        }else{
            printf("%s\n",ch);
        }
    }
    return 0;
}