#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char ch[1001];
    scanf("%s",ch);
    int j=strlen(ch)-1,count=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]!=ch[j]){
            count++;
            break;
        }else{
            j--;
        }
    }

    if(count==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}