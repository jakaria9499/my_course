#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {   
        char ch[10001];
        scanf("%s",ch);
        int a=0,b=0,c=0;
        for (int j = 0; j < strlen(ch); j++)
        {
            
            if(ch[j]>='A' && ch[j]<='Z'){
                a++;
            }else if(ch[j]>='a' && ch[j]<='z'){
                b++;
            }else if(ch[j]>='0' && ch[j]<='9'){
                c++;
            }
            
        }
        printf("%d %d %d\n",a,b,c);
        
    }
    
    return 0;
}