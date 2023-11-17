#include <stdio.h>
#include <string.h>
int main()
{   
    char ch[100000];
    scanf("%s",ch);
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>64 && ch[i]<91){
            ch[i]=ch[i]+32;
        }else if(ch[i]>96 && ch[i]<123){
            ch[i]=ch[i]-32;
        }else if(ch[i]==44){
            ch[i]=32;
        }
    }
    printf("%s",ch);
     
    
    return 0;
}
