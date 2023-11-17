#include <stdio.h>
#include <string.h>
int main()
{
    char s[201];
    fgets(s,201,stdin);
    char vowels[11]="aeiouAEIOU";
    int count=0;
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(s[i]==vowels[j])
            {   
                count++;
            }
        }
        
    }
    printf("%d",count);
    
    return 0;
}