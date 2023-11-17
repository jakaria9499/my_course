#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10001];
    scanf("%s",ch);
    int alfa[26]={0};
    for (int i = 0; i < strlen(ch); i++)
    {
        alfa[ch[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(alfa[i]!=0){
            printf("%c - %d\n",i+'a',alfa[i]);
        }
        alfa[i]=0;
    }
    
    
    return 0;
}